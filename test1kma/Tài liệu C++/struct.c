/*
Ví dụ 1:Viết chương trình khai báo cấu trúc Thí sinh gồm các trường: Mã thí sinh, họ tên,
ngày sinh, điểm Toán, điểm Văn, điểm Anh và Điểm trung bình. Nhập và in ra thông tin của
một thí sinh.Ví dụ 2: Với khai báo cấu trúc thí sinh ở trên, viết chương trình nhập vào danh sách thí sinh,
in danh sách toàn bộ thí sinh đã nhập và danh sách thí sinh trúng tuyển ( ĐTB >=7.0) */

#include <stdio.h>
#include <string.h>

typedef struct date
{
    int ngay;
    int thang;
    int nam;
} date;

typedef struct thisinh
{
    int ma;
    char ten[100];
    date ngaysinh;
    float toan;
    float van;
    float anh;
    float dtb;
} ts;

void nhap(ts *x)
{
    printf("\nNhap ma sinh vien: ");
    scanf("%d", &x->ma);

    getchar();

    printf("Nhap ho ten: ");
    fgets(x->ten, sizeof(x->ten), stdin);
    x->ten[strcspn(x->ten, "\n")] = '\0';

    printf("Nhap ngay sinh (ngay thang nam): ");
    scanf("%d %d %d",
          &x->ngaysinh.ngay,
          &x->ngaysinh.thang,
          &x->ngaysinh.nam);

    printf("Nhap diem Toan: ");
    scanf("%f", &x->toan);

    printf("Nhap diem Van: ");
    scanf("%f", &x->van);

    printf("Nhap diem Anh: ");
    scanf("%f", &x->anh);
}

void tinhdiemtb(ts *x)
{
    x->dtb = (x->toan + x->van + x->anh) / 3;
}

void in(ts x)
{
    printf("\nMa sinh vien: %d", x.ma);

    printf("\nHo ten: %s", x.ten);

    printf("\nNgay sinh: %d/%d/%d",
           x.ngaysinh.ngay,
           x.ngaysinh.thang,
           x.ngaysinh.nam);

    printf("\nDiem Toan: %.2f", x.toan);

    printf("\nDiem Van: %.2f", x.van);

    printf("\nDiem Anh: %.2f", x.anh);

    printf("\nDiem trung binh: %.2f\n", x.dtb);
}

void intrungtuyen(ts a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i].dtb >= 7)
        {
            in(a[i]);
        }
    }
}
void intrungtuyen2(ts a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i].dtb >= 5 && a[i].toan > 2 && a[i].van > 2 && a[i].anh > 2)
        {
            in(a[i]);
        }
    }
}
void timkiemma(ts a[], int n, int m)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (m == a[i].ma)
        {
            in(a[i]);
            return;
        }
    }
}

void sx(ts a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int min = i;
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (a[j].dtb < a[min].dtb)
            {
                min = j;
            }
        }
        ts tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

int main()
{
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    getchar();

    ts a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n===== Nhap thong tin sinh vien thu %d =====\n", i + 1);

        nhap(&a[i]);

        tinhdiemtb(&a[i]);
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");

    for (i = 0; i < n; i++)
    {
        in(a[i]);
    }
    //    printf("\n===== DANH SACH SINH VIEN TRUNG TUYEN=======\n);
    //    intrungtuyen(a,n);
    int s;
    // printf("Nhap ma thi sinh can tim kiem: "); scanf("%d",&s);
    // timkiemma(a,n,s);
    sx(a, n);

    printf("\nDanh sach sau khi sap xep:\n");

    int i;

    for (i = 0; i < n; i++)
    {
        in(a[i]);
    }
    return 0;
}