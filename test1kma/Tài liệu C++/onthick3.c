// /*
// 1)    Viết chương trình tạo ra một danh sách liên kết thuận để quản lý danh sách
// nhân viên trong công ty. Cấu trúc gồm các thành phần: hoTen, maNV, namSinh,
// luong (Kiểu dữ liệu sinh viên tự xác định).
// Chương trình được tổ chức thành các chương trình con sau:
// 1. Tạo danh sách nhân viên.
// 2. Hiển thị danh sách ra màn hình theo dạng:
// DANH SACH NHAN VIEN
// STT Hoten Ma NV Nam sinh Luong
// 3. Xóa một nhân viên theo mã nhân viên, rồi in lại danh sách.
// Hàm main() hiển thị menu để chọn các chức năng bằng cách nhập số tương ứng
// như sau:
// 1. Tao danh sach nhan vien
// 2. Hien thi danh sach nhan vien
// 3. Xoa nhan vien theo ma
// 4. Ket thuc
// Chức năng nào được chọn sẽ gọi thực hiện chương trình con tương ứng
// */
// #include <stdio.h>  // thư viện nhập xuất: printf, scanf, fgets
// #include <string.h> // thư viện xử lý chuỗi: strcspn, strcmp
// #include <stdlib.h> // thư viện cấp phát bộ nhớ động: malloc, free

// // ============================================================
// //  BƯỚC 1: ĐỊNH NGHĨA CẤU TRÚC DỮ LIỆU
// // ============================================================

// // Tạo kiểu dữ liệu NhanVien để lưu thông tin 1 nhân viên
// typedef struct nhanvien
// {
//     char hoten[50]; // mảng ký tự lưu họ tên, tối đa 50 ký tự
//     char manv[10];  // mảng ký tự lưu mã nhân viên, tối đa 10 ký tự
//     int namsinh;    // số nguyên lưu năm sinh
//     float luong;    // số thực lưu lương
// } Nhanvien;         // đặt tên ngắn gọn là NhanVien để dùng bên dưới

// // Tạo kiểu dữ liệu node — mỗi node là 1 ô trong danh sách liên kết
// typedef struct node
// {
//     Nhanvien data;     // phần dữ liệu: lưu thông tin 1 nhân viên
//     struct node *next; // phần con trỏ: trỏ tới node tiếp theo, node cuối trỏ NULL
// } node;

// // ============================================================
// //  BƯỚC 2: CÁC HÀM TIỆN ÍCH NODE (cấp phát, thêm, giải phóng)
// // ============================================================

// // Hàm tạo 1 node mới từ dữ liệu nhân viên nv
// node *makenode(Nhanvien nv)
// {
//     node *newnode = (node *)malloc(sizeof(node)); // xin cấp phát vùng nhớ đúng kích thước 1 node
//     newnode->data = nv;                           // gán thông tin nhân vào phần data của node
//     newnode->next = NULL;                         // node mới chưa liên kết với , trỏ NULL
//     return newnode;
// }

// // Hàm thêm 1 nhân vào cuối dslk
// void pushback(node **head, Nhanvien nv)
// {                                 // **head: con trỏ đén con trỏ head để có thể thay đổi head bên ngoài
//     node *newnode = makenode(nv); // tạo node mới chưa nv
//     if (*head == NULL)
//     {                    // nếu danh sách đang rỗng
//         *head = newnode; // node mới chính là node đầu tiên
//         return;          // dừng hàm
//     }
//     node *temp = *head; // dùng temp phê duyệt không làm mất head gốc
//     while (temp->next != NULL)
//     {                      // đi đến khi gặp node cuối ( next = NULL)
//         temp = temp->next; // bước sang node tiếp theo
//     }
//     temp->next = newnode; // móc node mưới vào sau node cuối cùng
// }

// // Hàm giải phóng toàn bộ bộ nhớ của danh sách liên kết
// void freeALL(node **head)
// {
//     while (*head != NULL) // lặp đến khi danh sách rỗng hoàn toàn
//     {
//         node *temp = *head;    // lưu địa chỉ node đầu vào temp
//         *head = (*head)->next; // dịch head sang node tiếp theo
//         free(temp);
//     }
// }

// // HÀM NHẬP 1 NHÂN VIÊN TỪ BÀN PHÍM
// void nhap(Nhanvien *nv)
// {
//     printf("\nNhap ten nhan vien: ");
//     fgets(nv->hoten, sizeof(nv->hoten), stdin); // đọc cả chuỗi có khoảng trắng
//     nv->hoten[strcspn(nv->hoten, "\n")] = '\0'; // cắt ký tự '\n' ở cuối mà fgets thêm vào
//     printf("\nNhap ma nhan vien: ");
//     fgets(nv->manv, sizeof(nv->manv), stdin); // đọc cả chuỗi có khoảng trắng
//     nv->manv[strcspn(nv->manv, "\n")] = '\0'; // cắt ký tự '\n' ở cuối mà fgets thêm vào
//     printf("\nNhap nam sinh nhan vien: ");
//     scanf("%d", &nv->namsinh);
//     printf("\nNhap luong nhan vien: ");
//     scanf("%f", &nv->luong);
//     getchar(); // xóa ký tự '\n' còn soát sau scanf tránh lỗi fgtes lần sau
// }

// void in(Nhanvien nv, int stt)
// {
//     //%-4d: in stt , căn trái , chiếm 4 ký tự
//     // %-20s : in họ tên , căn trái , chiếm 20 ký tự
//     // %-10s: in mã sv , căn trái , chiếm 10 ký tự
//     // %-10d: in năm sinh , căn trái ,chiếm 10 ký tự
//     // %-12.0f : in lương , không có phần thấp phân quá 2 số , chiếm 12 ký tự
//     printf("%-4d %-20s %-10s %-10d %-12.2f \n ",
//            stt, nv.hoten, nv.manv, nv.namsinh, nv.luong);
// }

// // 1: TẠO DANH SÁCH NHÂN VIÊN

// void taodanhsach(node **head)
// {
//     freeALL(head); // xóa sạch dữ liệu cũ nếu đã tạo trước đó , tránh melory leak
//     int n;
//     printf("\nNhap so luong nhan vien: ");
//     scanf("%d", &n);
//     getchar();
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nNhap nhan vien thu %d: ", i + 1);
//         Nhanvien nv;        // tạo biến tạm lưu 1 nhân viên
//         nhap(&nv);          // gọi hàm nhập , truyền địa chỉ để thay đổi trực tiếp
//         pushback(head, nv); // thêm nhân viên vừa nhập vào cuối danh sách
//     }
// }

// // 2: HIỂN THỊ DANH SÁCH
// void hienthi(node *head)
// {
//     if (head == NULL)
//     {
//         printf("\nDanh sachh rong\n");
//         return;
//     }
//     printf("\n=============DANH SACH NHAN VIEN ======================\n");
//     printf("%-4s %-20s %-10s %-10s %-12s\n",
//            "STT", "Ho ten", "Ma NV", "Nam sinh", "Luong");
//     int stt = 1; // biến đếm số thứ tự
//     while (head != NULL)
//     {                          // duyệt từ đầu đến cuối danh sách
//         in(head->data, stt++); // in dữ liệu node hiện tại , stt++ tăng sau khi dùng
//         head = head->next;     // bước sang node tiếp theo
//     }
// }
// // 3: XÓA NHÂN VIÊN THEO MÃ

// void xoatheoma(node **head)
// { // cần ** vì có thể thay đổi chính node head
//     if (*head == NULL)
//     { // danh sách rỗng thì không có gì để xóa
//         printf("\nDanh sach rong\n");
//         return;
//     }
//     char ma[10];
//     printf("\nNhap ma sinh vien can xoa: ");
//     fgets(ma, sizeof(ma), stdin);
//     ma[strcspn(ma, "\n")] = '\0';
//     // Trường hợp 1: node cần xóa là node đầu tiên
//     if (strcmp((*head)->data.manv, ma) == 0)
//     {                          // so sách mã ,strcmp trả về 0 nếu bằng nhau
//         node *xoa = *head;     // lưu node đầu vào xóa
//         *head = (*head)->next; // head dịch sang node thứ 2
//         free(xoa);
//         printf("\n Xoa thanh cong");
//         hienthi(*head); // in lại danh sách
//         return;
//     }
//     // Trường hợp 2: node cần xóa nằm ở giữa hoặc cuối
//     node *temp = *head;
//     while (temp->next != NULL) // duyệt đến node kế cuối
//     {
//         if (strcmp(temp->next->data.manv, ma) == 0)
//         {
//             node *xoa = temp->next; // xóa trỏ vào node cần xóa;
//             temp->next = xoa->next; // node trước xóa nhảy qua , trỏ vào node sau xóa
//             free(xoa);
//             printf("\n Xoa thanh cong ");
//             hienthi(*head);
//             return;
//         }
//         temp = temp->next; // chưa tìm thấy , bước tiếp
//     }
//     printf("\n Khong tim thauy nhan vin có ma: %s\n", ma);
// }

// int main()
// {
//     node *head = NULL;
//     int luachon;
//     do // vòng lặp do - while : chạy ít nhất 1 lần , dừng lại khi chọn 4
//     {
//         printf("\n======MENU QUANG LY NHAN VIEN ======\n");
//         printf("\n1. Tao danh sach nhan vien\n");
//         printf("\n 2. Hien thi danh sach nhan vien\n");
//         printf("\n3.Xoa nhan vien theo ma\n");
//         printf("\n4. Ket thuc\n");
//         printf("=========================================");
//         printf("\nNhap lua chon: ");
//         scanf("%d", &luachon);
//         getchar();

//         switch (luachon)
//         {
//         case 1:
//             taodanhsach(&head);
//             break; // truyền &head vì hàm cần thay đổi head
//         case 2:
//             hienthi(head); // truyền head vì chỉ đọc
//             break;
//         case 3:
//             xoatheoma(&head);
//             break; // truyền &head vì có thể đổi node đầu
//         case 4:
//             freeALL(&head);
//             printf("\nTam biet\n");
//             break;
//         default:
//             printf("\nLua chon khong hop le\n");
//         }
//     } while (luachon != 4); // tiếp tục lặp cho đến khi chọn 4
//     return 0;
// }

/*
1)	Cho cấu trúc:
struct SanPham {
    char maSP[20];
    char tenSP[50];
    float gia;
};
Thực hiện:
a) Nhập danh sách sản phẩm và lưu vào file sp.dat.
b) Hiển thị các sản phẩm có giá lớn hơn 1.000.000 đồng.
c) Xóa sản phẩm theo mã sản phẩm.
*/
