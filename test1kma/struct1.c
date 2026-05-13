// STUCT Cấu trúc : cần lưu thông tin của một đối tượng nào đó mà ko thể biểu diễn qua các kiểu dữ liệu nguyên thủy
//  Lưu thông tin của nhiều đối tượng , có thể lưu những thành phần có cùng kiểu dữ liệu với nhau
// Định nghĩa một bảng ghi để lưu thông tin
// Các Struct có thể lồng nhau
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// struct struct_Name // KHAI BÁO STRUCT
// {
//     // data
// };
// struct date{
//  int ngay, thang , nam;
// };
// struct hour{
//  int gio,phut, giay;
// };
// struct ve{ //các struct lồng nhau
//  date ngayxem;
//  hour gioxem;
//  char tenphim[100];
//  double giave;

// };
// struct sinhvien
// {
//     char masv[20];
//     char tensv[50];
//     double gpa;
//     char lop[20];
// };
// typedef struct sinhvien SV; // dùng SV để thay cho struct sinhvien
// int main()
// {
//     // int n;
//     // SV a; // a là tên sinh viên
//     // // dot operator
//     // scanf("%s", a.masv);
//     // getchar();
//     // gets(a.tensv);
//     // scanf("%lf %s", &a.gpa, a.lop);
//     // printf("%s %s %.2f %s\n", a.masv, a.tensv, a.gpa, a.lop);
//     // SV b = a; // copy từng nội dung của a vào b
//     // printf("%s %s %.2f %s\n", b.masv, b.tensv, b.gpa, b.lop);
//     struct ve v;
//     v.giave;
//     v.tenphim;
//     v.ngayxem.thang; // truy cập vào tháng
//     v.ngayxem.ngay
//     v.ngayxem.nam;
//     v.gioixem.giay;

//     return 0;
// }

// XÂY DỰNG HÀM NHẬP THÔNG TIN CHO MỘT STRUCT
//  #include <stdio.h>
//  #include <string.h>
//  #include <ctype.h>
//  #include <stdlib.h>
//  struct hocsinh
//  {
//      char ten[100];
//      double diem;
//  };

// typedef struct hocsinh hs;
// Cách 1: Hàm nhập thông tin trả về struct
//  hs nhap()
//  {
//      hs x;

//     printf("Nhap ten: ");
//     fgets(x.ten, sizeof(x.ten), stdin);

//     x.ten[strcspn(x.ten, "\n")] = '\0';

//     printf("Nhap diem: ");
//     scanf("%lf", &x.diem);

//     getchar();

//     return x;
// }
// CÁCH 2: Dùng con trỏ
// void nhap(hs *x)
// {
//     fgets(x->ten, sizeof(x->ten), stdin);
//     x->ten[strcspn(x->ten, "\n")] == '\0';
//     scanf("%lf ",&x->diem);
// }
// void in(hs a)
// {
//     printf("%s %.2lf\n", a.ten, a.diem);
// }

// int main()
// {
//     hs a;
//     nhap(&a);

//     in(a);

//     return 0;
// }

// STRUCT LIÊN QUAN TỚI MẢNG
// Nhập thông tin cho n sinh viên
// #include <stdio.h>
// #include <string.h>

// struct hocsinh
// {
//     char ten[1000];
//     double diem;
// };
// typedef struct hocsinh hs;

// void nhap(hs *x)
// {
//     getchar();
//     fgets(x->ten, sizeof(x->ten), stdin);

//     scanf("%lf", &x->diem);
// }
// void in(hs a)
// {
//     printf("%s %.2lf\n", a.ten, a.diem);
// }

// int main()
// {
//     hs a[1000];
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         nhap(&a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         in(a[i]);
//     }

//     return 0;
// }

/////CÁC BÀI TOÁN VỀ STRUCT

// Bài 1: tìm kiếm
// Bài 2: tìm kiếm ... lớn nhất nhỏ nhất
// Bài 3: Sắp xếp

// Bài toán tìm kiếm thông tin , thông qua mã sv
#include <stdio.h>
#include <string.h>

struct SV
{
    char ma[50];
    char ten[100];
    float gpa;
};

typedef struct SV SV;

void nhap(SV *a)
{
    scanf("%s", a->ma);

    getchar();

    fgets(a->ten, sizeof(a->ten), stdin);

    a->ten[strcspn(a->ten, "\n")] = '\0';

    scanf("%f", &a->gpa);
}

void in(SV a)
{
    printf("%s %s %.2f\n", a.ma, a.ten, a.gpa);
}

void timkiem1(SV a[], int n, char m[]) // HAM TÌM KIẾM SINH VIÊN THEO MÃ GPA
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(m, a[i].ma) == 0)
        {
            in(a[i]);
            return;
        }
    }

    printf("Khong tim thay sinh vien\n");
}
void timkiem2(SV a[], int n) // HÀM TÌM SINH VIÊN CÓ ĐIỂM GPA CAO NHẤT
{
    float res = 0;
    int vitri;
    for (int i = 0; i < n; i++)
    {
        if (a[i].gpa > res)
        {
            res = a[i].gpa;
            vitri = i;
        }
    }
    in(a[vitri]);
}

void sx(SV a[], int n)
{ // HÀM SẮP XẾP theo thứ tự giảm dần
    for (int i = 0; i < n; i++)
    {
        int max_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].gpa > a[max_idx].gpa)
            {
                max_idx = j;
            }
        }
        SV tmp = a[i];
        a[i] = a[max_idx];
        a[max_idx] = tmp;
    }
}
int main()
{
    int n;

    scanf("%d", &n);

    SV a[n];

    for (int i = 0; i < n; i++)
    {
        nhap(&a[i]);
    }

    printf("\nDanh sach sinh vien:\n");

    for (int i = 0; i < n; i++)
    {
        in(a[i]);
    }

    char s[100];

    getchar();

    printf("Nhap ma sv can tim: ");

    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    timkiem1(a, n, s);
    timkiem2(a, n);
    sx(a, n);

    return 0;
}