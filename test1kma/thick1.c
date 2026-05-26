// #include <stdio.h>
// #include <math.h>
// int snt(int i)
// {
//     if (i < 2)
//     {
//         return 0;
//     }
//     else if (i == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         for (int k = 2; k < sqrt(i); k++)
//         {
//             if (i % k == 0)
//             {
//                 return 0;
//             }
//             else
//             {
//                 return 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     snt(n);
//     if (snt(n))
//     {
//         printf("%d la so nt", n);
//     }
//     else
//     {
//         printf("%d ko la so nt", n);
//     }

//     return 0;
// }

/*Bài 2: Số Armstrong ( hay số tự thủy tiên ) bậc 3 là số có 3 chữ số mà tổng lập phương các chữ số bằng chính nó
ví dụ 153 = 1^3 + 5^3 + 3^3= 153
Số N được gọi là số Lucky nếu tích các chữ số của N ( khác )là một số ARrmstrong bậc 3
Ví dụ: N = 59 -> tích chữ số 5x9= 45 ( khong phải armstrong)->59 ko phải là Lucky
Yêu cầu: Viết chương trình nhập vào số nguyên N ( 100<=N<=9999),kiếm tra N có phải là lucky hay không*/
// #include <stdio.h>
// #include <math.h>

// int amtrong(int i)
// {
//     int t = i;
//     int b[99];
//     for (int k = 0; k < 3; k++)
//     {
//         b[k] = t % 10;
//         t = t / 10;

//     }
//     int sum = 0;
//     for (int j = 0; j < 3; j++)
//     {
//         sum = sum + pow(b[j], 3);
//     }
//     if (sum == i)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     while (n < 100 || n > 9999)
//     {
//         printf("Vui long nhap lai n: ");
//         scanf("%d", &n);
//     }

//     int tich = 1;

//     while (n > 0)
//     {
//         int so = n % 10;

//         if (so != 0)
//         {
//             tich = tich * so;
//         }

//         n = n / 10;
//     }

//     if (amtrong(tich))
//     {
//         printf("YES");
//     }
//     else
//     {

//         printf("NO");
//     }

//     return 0;
// }

/*Bài 1: Viết chương trình in ra bảng cửu chương của một số nguyên dương N nhập vào từ bàn phím*/

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Nhap n: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d * %d = ", n, i);
//         int tich = n * i;
//         printf("%d\n", tich);
//     }

//     return 0;
// }

/*Bài 2:Số Neon là số mà tổng cac chư số của bình phương số đó băèng chính số đó
Ví dụ: N=9->9^2=81->tổng chữ số: 8+1=9-> số Neon
Số N được gọi là số DOUble-Neon Nếu N là số Neon và tổng các chữ số của N cũng là số Neon */
// #include <stdio.h>
// #include <math.h>
// int neon(int k)
// {
//     int t = pow(k, 2);
//     int tong = 0;
//     while (t > 0)
//     {
//         tong = tong + (t % 10);
//         t = t / 10;
//     }
//     if (tong == k)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int n;
//     printf("Nhap n: ");
//     scanf("%d", &n);
//     if (neon(n) == 1)
//     {
//         int tong2 = 0;
//         int l = n;
//         while (l > 0)
//         {
//             tong2 = tong2 + (l % 10);
//             l = l / 10;
//         }
//         if (neon(tong2) == 1)
//         {
//             printf("%d la so double-neon", n);
//         }
//         else
//         {
//             printf("%d ko phai la so double-neon", n);
//         }
//     }
//     else
//     {
//         printf("%d khong la so double - neon", n);
//     }

//     return 0;
// }

// bài toán số ngược
// #include <stdio.h>
//
// int main()
//{
//    int n;
//
//    printf("Nhap n: ");
//    scanf("%d", &n);
//
//    while (n < 10)
//    {
//        printf("Vui long nhap lai n: ");
//        scanf("%d", &n);
//    }
//
//    int doicho = 0;
//    int f = n;
//
//    while (f > 0)
//    {
//        int socuoi = f % 10;
//
//        doicho = doicho * 10 + socuoi;
//
//        f = f / 10;
//    }
//    printf("%d", doicho);
//
//    if (doicho == n)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//
//    return 0;
//}
// #include <stdio.h>
// #include <string.h>
//
// int main()
//{
//    char s[100];
//
//    printf("Nhap so: ");
//    scanf("%s", s);
//
//    int left = 0;
//    int right = strlen(s) - 1;
//
//    int check = 1;
//
//    while (left < right)
//    {
//        if (s[left] != s[right])
//        {
//            check = 0;
//            break;
//        }
//
//        left++;
//        right--;
//    }
//
//    if (check == 1)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//
//    return 0;
//}

/*Đề số 07 – Câu 3 (5 điểm)

Viết chương trình quản lý kho hàng sử dụng mảng cấu trúc (struct).

Mỗi mặt hàng gồm:

Mã (int)
Tên (string[50])
Số lượng (int)
Giá (float)

Thực hiện:

a. Nhập danh sách N mặt hàng.

b. In danh sách hàng có số lượng dưới mức tối thiểu (nhập min từ bàn phím).

c. Sắp xếp danh sách theo giá tăng dần.

d. Ghi danh sách đã sắp xếp vào file "kho.txt".*/

#include <stdio.h>
#include <string.h>

typedef struct mathang
{
    int ma;
    char ten[99];
    int sl;
    float gia;
} mh;

void nhap(mh *x)
{
    printf("\nNhap ma hang: ");
    scanf("%d", &x->ma);
    getchar();
    printf("Nhap ten hang: ");
    fgets(x->ten, sizeof(x->ten), stdin);
    x->ten[strcspn(x->ten, "\n")] = '\0';
    printf("Nhap so luong: ");
    scanf("%d", &x->sl);
    printf("Nhap gia: ");
    scanf("%f", &x->gia);
}
void in(mh x)
{

    printf("\n%-10d %-20s %-10d %-10.2f",
           x.ma,
           x.ten,
           x.sl,
           x.gia);
}
void inmintoithieu(mh a[], int n, int min)
{

    int i;
    for (i = 0; i < n; i++)
    {

        if (a[i].sl < min)
        {
            in(a[i]);
        }
    }
}

void sx(mh a[], int n)
{

    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j].gia < a[min].gia)
            {
                min = j;
            }
        }
        mh temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void ghifile(mh a[], int n)
{
    FILE *f;
    f = fopen("kho.txt", "w");
    if (f == NULL)
    {
        printf("\nLoi mo file");
    }
    int i;
    for (i = 0; i < n; i++)
    {
        fprintf(f, "%d %s %d %.2f",
                a[i].ma,
                a[i].ten,
                a[i].sl,
                a[i].gia);
    }
    fclose(f);
}

int main()
{
    int n;
    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);
    mh a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nNhap mat hang thu %d", i + 1);
        nhap(&a[i]);
    }
    printf("\nDanh sach mat hang: ");
    for (i = 0; i < n; i++)
    {
        in(a[i]);
    }
    int min;
    printf("\nNhap muc toi thieu: ");
    scanf("%d", &min);
    printf("\nHang duoi muc toi thieu: ");
    inmintoithieu(a, n, min);
    sx(a, n);
    printf("\nDanh sach sau sap xep la: ");
    for (i = 0; i < n; i++)
    {
        in(a[i]);
    }
    ghifile(a, n);
    return 0;
}

