// /*
// THIẾT KẾ
// 1. MỖI PHẦN TỬ LÀ 1 NODE , BAO GỒM
// 1.1 GIÁ TRỊ -data
// 1.2 Con trỏ *next trỏ vào phần tử kế tiếp

// 2.DANH SÁCH LIÊN KẾT SẼ CÓ
// 2.1 Phần tử đầu tiên được kiểm soát thông qua một con trỏ
// 2.2 Phần tử cuối cùng được xác định bằng con trỏ *next trỏ vào NULL
// */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct node {
//     int data; // có thể thay int data thành một struct khác chẳng hạn như struct sinhvien
//     struct node* next; //next có thể thay đổi

// } Node;

// Node* first = NULL; // lúc đầu chưa có phần tử nào nên trỏ vào trỏ NULL

// // Phương thức cơ bản của một danh sách liên kết
// // Phương thức liên quan đến một phần tử - node
// //-Cấp phát 1 node
//  int nhapdata(){
//     int n;
//     scanf("%d",&n);
//     return n;
//  }

// //-Trỏ con trỏ next
// Node* capphatnode(){
//     Node* pNode = (Node*)malloc(sizeof(Node));
//     if(pNode == NULL){
//         printf("Cap phat khong thanh cong\n");
//     }
//     return pNode;
// }
// //-Gán/nhập giá trị 1 node

// Node* taonode(int value){
//     Node* pNode = capphatnode();
//     pNode->data = value;
//     pNode->next = NULL;
//     return pNode;
// }

// Node* taovanhapnode(){
//     int value = nhapdata();

//     Node* pNode = taonode(value);
//     return pNode;
// }
// //Phương thức liên quan đến cấu trúc của danh sách liên kết ( thêm , xóa , tìm ,...)

// void taovanhapptudauein(){
//     Node* pNode = taovanhapnode();
//     first = pNode;
//     pNode->next = NULL;
// }
// // Thêm phần tử vào đầu danh sách

// void themptudautien(Node* pNode){
//     first = pNode;
//     pNode->next = NULL;
// }
// void themptuovitridau(Node* pNode){
//     if(first == NULL){
//         themptudautien(pNode);
//     }
//     else{
//         pNode->next = first;
//         first = pNode;
//     }
// }

// int main(){

//     return 0;
// }

//---------------------DANH SÁCH LIÊN KẾT 28 TECH------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;

} node;

// TẠO MỘT NODE MỚI , cấp phát một node mới và retu
rn về cái node đó, node là con trỏ và phải cấp phát động
    // Mỗi node trong dslk là một con trỏ kiểu node

    node *makenode(int x)
{
    node *newnode = (node *)malloc(sizeof(node)); // cấp phát động
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

// DUYỆN DANH SÁCH LIÊN KẾT
void duyet(node *head)
{ // tham số là một con trỏ node tên là head
    while (head != NULL)
    {                              // chạy đến cuối cùng nếu NULL thì dừng
        printf("%d ", head->data); // head->data là giá trị của data
        head = head->next;         // Duy chuyển con trỏ head từ node hiện tại sang node tiếp theo
    }
}

// IN RA XEM DSLK CÓ BAO NHIÊU NODE
int dem(node *head)
{
    int dem = 0;
    while (head != NULL)
    {
        ++dem;
        head = head->next;
    }
    return dem;
}

// THÊM MỘT NODE VÀO ĐẦU DANH SÁCH LIÊN KẾT
void pushfront(node **head, int x) // truyển con trỏ đến con trỏ
{
    node *newnode = makenode(x);
    // bước 1: phần next của nwnode =>head
    newnode->next = *head; //*head là đại chỉ của node head trong dslk
    // Bước 2 cập nhật node head =>new node
    *head = newnode;
}

// THÊM NODE VÀO CUỐI DSLK
void pushback(node **head, int x)
{
    node *temp = *head;          // (1) Khởi tạo con trỏ duyệt
    node *newnode = makenode(x); // (2) Sinh ra node mới cần chèn

    // (3) XỬ LÝ ĐIỀU KIỆN BIÊN (Edge Case): Danh sách đang rỗng
    if (*head == NULL)
    {
        *head = newnode;
        return; // Dừng hàm ngay lập tức
    }

    // (4) DUYỆT TÌM NODE CUỐI CÙNG
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // (5) THỰC HIỆN LIÊN KẾT
    temp->next = newnode;
}

// CHÈN NODE VÀO GIỮA DSLK
// CHÈN NODE VÀO VỊ TRÍ K BẤT KỲ
void insert(node **head, int k, int x)
{
    // 1. Dùng hàm dem() đã viết để lấy tổng số Node
    int n = dem(*head);

    // 2. Kiểm tra điều kiện vị trí chèn có hợp lệ không
    if (k < 1 || k > n + 1)
    {
        printf("Vi tri chen khong hop le!\n");
        return;
    }

    // 3. Nếu chèn vào vị trí số 1 -> Gọi ngay hàm chèn đầu
    if (k == 1)

    {
        pushfront(head, x);
        return;
    }

    // 4. Nếu chèn vào giữa: Đi tìm toa tàu thứ k - 1
    node *temp = *head;
    for (int i = 1; i <= k - 2; i++)
    {
        temp = temp->next;
    }

    // Lúc này temp đang đứng ở toa thứ (k - 1)
    // 5. Tạo toa mới và tiến hành cắt nối dây
    node *newnode = makenode(x);
    newnode->next = temp->next; // Móc đuôi toa mới vào toa thứ k
    temp->next = newnode;       // Chuyển móc của toa k-1 sang toa mới
}

// XÓA NODE KHỎI ĐẦU VÀ CUỐI DSLK
void popfront(node **head)
{
    if (*head == NULL)
        return;
    node *temp = *head; // giải phóng
    *head = (*head)->next;
    free(temp);
}
// XÓA NODE KHỎI CUỐI DSLK
void popback(node **head)
{
    if (*head == NULL)
        return;
    node *temp = *head;
    if (temp->next == NULL)
    { // trường hợp dslk chỉ có 1 node
        *head = NULL;
        free(temp);
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *last = temp->next;
    temp->next = NULL;
    free(temp);
}
// XÓA NODE GIỮA TRONG DSLK , chó được từ 2 đến n-1
void ersa(node **head, int k)
{
    int n = dem(*head); // Gọi hàm dem() và truyền *head (Đã sửa lỗi size)

    if (k < 1 || k > n)
        return; // Vị trí không hợp lệ thì nghỉ xóa

    if (k == 1)
    {
        popfront(head);
    }
    else
    {
        node *temp = *head;
        for (int i = 1; i <= k - 2; i++)
        {
            temp = temp->next;
        }

        // temp đang đứng ở toa k-1
        node *kth = temp->next; // kth chính là toa thứ k (kẻ bị dòm ngó)

        // Lấy dây của toa k-1 móc vòng qua đầu toa thứ k, cắm thẳng vào toa k+1
        temp->next = kth->next;

        free(kth); // Rút ống thở toa thứ k
    }
}

int main()
{
    node *head = NULL;

    while (1)
    {
        printf("\n1. Them vao dau\n");
        printf("2. Them vao cuoi\n");
        printf("3. Them vao giua\n");
        printf("4.Xoa node khoi dau danh sach\n");
        printf("5.Xoa node khoi cuoi danh sach\n");
        printf("6.Xoa node o giua : \n");
        printf("7. Duyet danh sach\n");
        printf("0. Thoat\n");
        printf("_______________________________________________________\n");

        int luachon;
        printf("Nhap lua chon: ");
        scanf("%d", &luachon);

        if (luachon == 1)
        {
            int x;
            printf("Nhap gia tri x: ");
            scanf("%d", &x);
            pushfront(&head, x);
        }
        else if (luachon == 2)
        {
            int x;
            printf("Nhap gia tri x: ");
            scanf("%d", &x);
            pushback(&head, x);
        }
        else if (luachon == 3)
        {
            int x, k;
            printf("Nhap gia tri x: ");
            scanf("%d", &x);
            printf("Nhap vi tri k can chen: ");
            scanf("%d", &k);     // Sửa lại thành %d
            insert(&head, k, x); // Truyền đúng thứ tự k trước, x sau
        }
        else if (luachon == 4)
        {
            popfront(&head);
        }
        else if (luachon == 5)
        {
            popback(&head);
        }
        else if (luachon == 6)
        {
            int k;
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &k);
            ersa(&head, k);
        }
        else if (luachon == 7)
        {
            printf("Danh sach hien tai: ");
            duyet(head);
            printf("\n");
        }
        else if (luachon == 0)
        {
            printf("Ket thuc chuong trinh!\n");
            break;
        }
        else
        {
            printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}