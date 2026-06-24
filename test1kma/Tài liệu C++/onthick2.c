/*1)	1)	Tạo file thuvien.txt chứa thông tin các đầu sách, gồm: Tên sách, Mã sách, Số trang.
Viết chương trình thực hiện các chức năng sau:
1.	Nhập danh sách sách và lưu vào mảng (2 điểm)
2.	Ghi danh sách sách từ mảng vào file văn bản thuvien.txt (2 điểm)
3.	Tìm sách theo từ khóa trong tên sách (1 điểm)
4.	In ra sách có số trang nhiều nhất (1 điểm)
*/
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// typedef struct thuvien
// {
//     char ten[100];
//     char ma[100];
//     int sotrang;
// } sach;

// void nhap(sach *x)
// {

//     printf("\nNhap ten sach: ");
//     fgets(x->ten, sizeof(x->ten), stdin);
//     x->ten[strcspn(x->ten, "\n")] = '\0';
//     printf("\nNhap ma sach: ");
//     fgets(x->ma, sizeof(x->ma), stdin);
//     x->ma[strcspn(x->ma, "\n")] = '\0';
//     printf("\nNhap so trang sach: ");
//     scanf("%d", &x->sotrang);
//     getchar();
// }

// void in(sach x)
// {
//     printf("%-20s %-15s %-10d\n", x.ten, x.ma, x.sotrang);
// }
// void ghifile(sach ds[], int n)
// {
//     FILE *f = fopen("thuvien.txt", "w");
//     if (f == NULL)
//     {
//         printf("Khong mo duoc file\n");
//         return;
//     }
//     fprintf(f, "%-30s %-15s %-10s\n", "Ten Sach", "Ma sach", "So Trang");
//     fprintf(f, "________________________________________\n");
//     for (int i = 0; i < n; i++)
//     {
//         fprintf(f, "%-30s %-15s %-10d\n", ds[i].ten, ds[i].ma, ds[i].sotrang);
//     }
//     fclose(f);
// }
// void timkiem(sach ds[], int n, char keyword[])
// {
//     int danhdau = 0;
//     printf("\nKet qua tim kiem theo tu khoa la: \n");
//     printf("%-30s %-15s %-10s\n", "Ten Sach", "Ma sach", "So Trang");
//     printf("----------------------------------------------\n");
//     for (int i = 0; i < n; i++)
//     {
//         if (strstr(ds[i].ten, keyword) != NULL)
//         {
//             in(ds[i]);
//             danhdau++;
//         }
//     }
//     if (danhdau == 0)
//     {
//         printf("\nKhong tim thay danh sach nao!");
//     }
// }

// void nhieunhat(sach ds[], int n)
// {
//     int vitri = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (ds[i].sotrang > ds[vitri].sotrang)
//         {
//             vitri = i;
//         }
//     }
//     printf("\nSach co so trang nhieu nhat:\n");
//     printf("%-30s %-15s %-10s\n", "Ten sach", "Ma sach", "So trang");
//     printf("----------------------------------------------\n");
//     in(ds[vitri]);
// }

// int main()
// {
//     int n;
//     printf("\nNhap so luong sach: ");
//     scanf("%d", &n);
//     getchar();
//     sach ds[n];
//     // Nhap
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nNhap sach thu: %d", i + 1);
//         nhap(&ds[i]);
//     }
//     // In ra màn hình
//     printf("\nDanh sach sach vua nhap:\n");
//     printf("%-30s %-15s %-10s\n", "Ten sach", "Ma sach", "So trang");
//     printf("----------------------------------------------\n");
//     for (int i = 0; i < n; i++)
//     {
//         in(ds[i]);
//     }
//     ghifile(ds, n);

//     // timkiemtheotukhoa

//     char keyword[100];
//     printf("\nNhap tu koa can tim: ");
//     fgets(keyword, sizeof(keyword), stdin);
//     keyword[strcspn(keyword, "\n")] = '\0';
//     timkiem(ds, n, keyword);

//     // sach nhieu trang nhất
//     nhieunhat(ds, n);
//     return 0;
// }

/*2)	Tạo file lop.txt chứa danh sách học sinh gồm: Họ tên, Mã học sinh, Điểm kiểm tra
Viết chương trình thực hiện các chức năng:
1.	Nhập danh sách học sinh vào mảng (2 điểm)
2.	Ghi danh sách vào file văn bản lop.txt (2 điểm)
3.	Tìm học sinh có điểm kiểm tra cao nhất (1 điểm)
4.	Tìm học sinh theo mã học sinh (1 điểm)
*/

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// typedef struct hocsinh
// {
//     char ten[100];
//     char ma[100];
//     float diem;
// } ds;

// void nhap(ds *x)
// {
//     printf("\nNhap ten hoc sinh: ");
//     fgets(x->ten, sizeof(x->ten), stdin);
//     x->ten[strcspn(x->ten, "\n")] = '\0';
//     printf("\nNhap ma hoc sinh: ");
//     fgets(x->ma, sizeof(x->ma), stdin);
//     x->ma[strcspn(x->ma, "\n")] = '\0';
//     printf("\nNhap diem hoc sinh: ");
//     scanf("%f", &x->diem);
//     getchar();
// }
// void in(ds x)
// {
//     printf("%-15s %-15s %-15.2f", x.ten, x.ma, x.diem);
// }

// void ghifile(ds a[], int n)
// {
//     FILE *f = fopen("lop.txt", "w");
//     if (f == NULL)
//     {
//         printf("\n Loi mo file");
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         fprintf(f, "%-15s %-15s %-15.2f \n", a[i].ten, a[i].ma, a[i].diem);
//     }
//     fclose(f);
// }

// void diemcaonhat(ds a[], int n)
// {
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i].diem > a[max].diem)
//         {
//             max = i;
//         }
//     }
//     printf("\nSinh vien co diem cao nhat la: \n");
//     in(a[max]);
// }
// void timkiem(ds a[], int n, char m[100])
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(m, a[i].ma) == 0)
//         {
//             in(a[i]);
//             break;
//         }
//     }
// }

// int main()
// {
//     int n;
//     printf("\nNhap so luong hoc sinh: ");
//     scanf("%d", &n);
//     ds a[n];
//     getchar();
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nNhap thong tin hoc sinh thu %d: \n", i + 1);
//         nhap(&a[i]);
//     }
//     ghifile(a, n);

//     diemcaonhat(a, n);
//     char m[100];
//     printf("\nNhap ma sinh vien can tim kiem : ");
//     fgets(m, sizeof(m), stdin);
//     m[strcspn(m, "\n")] = '\0';
//     timkiem(a, n, m);
//     return 0;
// }

/*
4)	Viết chương trình xử lý một mảng số nguyên A gồm n phần tử. Chương trình thực hiện các chức năng:
1.	Nhập và in ra mảng A (2 điểm)
2.	Đếm và in ra số lượng các số chia hết cho 3 nhưng không chia hết cho 5 (2 điểm)
3.	Sắp xếp mảng tăng dần, sau đó cho phép nhập số x và chèn x vào vị trí thích hợp để giữ nguyên tính tăng dần của mảng (1 điểm)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <stdio.h>

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void dem(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 3 == 0 && a[i] % 5 != 0)
        { // ✅ != 0
            printf("%d ", a[i]);
            count++;
        }
    printf("\nCo %d so chia het cho 3 nhung khong chia het cho 5\n", count);
}
void sapxep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[max])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void chen(int a[], int *n, int x)
{
    // tìm vị trí cần chèn
    int vitri = 0;
    while (vitri < *n && a[vitri] < n)
    {
        vitri++;
    }

    // dịch các phần tử
    for (int i = *n; i > vitri; i--)
    {
        a[i] = a[i - 1];
    }
    // đặt x vào vị trí
    a[vitri] = x;
    (*n)++;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int a[n + 1];
    nhap(a, n);

    printf("Mang A: ");
    in(a, n);

    dem(a, n);

    sapxep(a, n);
    printf("Mang sau sap xep: ");

    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    chen(a, &n, x);
    printf("Mang sau chen: ");

    return 0;
}