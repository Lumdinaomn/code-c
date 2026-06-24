/*ĐỀ SỐ 03

Câu 1 (2 điểm):
Viết chương trình nhập vào một chuỗi ký tự. In ra số lượng ký tự hoa có trong chuỗi.

Câu 2 (3 điểm):
Số Fibonacci là số nằm trong dãy số: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
(mỗi số là tổng 2 số liền trước).

Số N được gọi là số Fibonacci-Prime nếu N là số nguyên tố và tổng các chữ số của N là một số Fibonacci.

Ví dụ:
N = 23 → nguyên tố = đúng; tổng chữ số = 2 + 3 = 5 (là Fibonacci)
→ 23 là Fibonacci-Prime.

Yêu cầu:
Viết chương trình nhập vào số nguyên N (N > 0), kiểm tra N có là số Fibonacci-Prime hay không.

Câu 3 (5 điểm):
Viết chương trình xây dựng danh sách liên kết đơn để lưu trữ danh sách sinh viên (MSSV: int, Họ tên: string, GPA: float). Thực hiện:

a. Thêm một sinh viên vào cuối danh sách.
b. In toàn bộ danh sách sinh viên.
c. Xóa sinh viên theo MSSV.
d. Tìm kiếm sinh viên theo MSSV và in thông tin.*/

/*Câu 1 (2 điểm):
Viết chương trình nhập vào một chuỗi ký tự. In ra số lượng ký tự hoa có trong chuỗi.*/

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>// dùng cho isuper():kiểm tra chữ hoa

// int main()
// {
//     int dem = 0;
//     char a[99];
//     printf("\nNhap chuoi: ");
//     fgets(a, sizeof(a), stdin);
//     a[strcspn(a, "\n")] = '\0';
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if (a[i] >= 'A' && a[i] <= 'Z')
//         {
//             dem++;
//         }
//     }
//     printf("\n%d", dem);

//     return 0;
// }

// Cách 2;
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h> // dùng cho isuper():kiểm tra chữ hoa

// int main()
// {
//     int dem = 0;
//     char a[99];
//     printf("\nNhap chuoi: ");
//     fgets(a, sizeof(a), stdin);
//     a[strcspn(a, "\n")] = '\0';
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if (isupper(a[i]))
//         {
//             dem++;
//         }
//     }
//     printf("\n%d", dem);

//     return 0;
// }

/*Câu 2 (3 điểm):
Số Fibonacci là số nằm trong dãy số: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
(mỗi số là tổng 2 số liền trước).

Số N được gọi là số Fibonacci-Prime nếu N là số nguyên tố và tổng các chữ số của N là một số Fibonacci.

Ví dụ:
N = 23 → nguyên tố = đúng; tổng chữ số = 2 + 3 = 5 (là Fibonacci)
→ 23 là Fibonacci-Prime.

Yêu cầu:
Viết chương trình nhập vào số nguyên N (N > 0), kiểm tra N có là số Fibonacci-Prime hay không. */

#include <stdio.h>
#include <math.h>
int fibo(int x)
{
    if (x < 0)
        return 0;

    long long fibo[93];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 93; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; i < 93; i++)
    {
        if (x == fibo[i])

            return 1;
    }
    return 0;
}
int snt(int x)
{
    if (x < 2)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
            if (x % i == 0)
            {
                return 0;
            }
    }
    return 1;
}
int main()
{
    int n;
    printf("Nhap so n can kiem tra: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("\n Vui long nhap lai n > 0 !");
        scanf("%d", &n);
    }

    int t = n;
    int tong = 0;
    while (t > 0)
    {
        tong = tong + t % 10;
        t = t / 10;
    }

    if (fibo(tong) && snt(n))
    {
        printf("%d Fibonacci-Prime", n);
    }
    else
    {
        printf("%d khong la Fibonacci-Prime", n);
    }

    return 0;
}

/*ĐỀ SỐ 04

Câu 1 (2 điểm):
Viết chương trình nhập vào mảng N số nguyên. Sắp xếp mảng theo thứ tự tăng dần và in ra màn hình.

Câu 2 (3 điểm):
Số Palindrome là số có giá trị bằng số đảo ngược của nó. Ví dụ:
121, 1221, 12321.

Số N được gọi là số Mega-Palindrome nếu tổng bình phương các chữ số của N là số Palindrome.

Ví dụ:
N = 23 → 2² + 3² = 4 + 9 = 13 (không phải Palindrome)
→ không phải Mega-Palindrome.

Ví dụ:
N = 12 → 1² + 2² = 1 + 4 = 5 (Palindrome 1 chữ số)
→ 12 là Mega-Palindrome.

Yêu cầu:
Viết chương trình nhập vào N (N > 0), kiểm tra N có là số Mega-Palindrome hay không.

Câu 3 (5 điểm):
Viết chương trình sử dụng mảng 1 chiều để thực hiện các thao tác sau với N số nguyên:

a. Nhập mảng từ bàn phím.
b. Tìm giá trị lớn nhất, nhỏ nhất và vị trí của chúng.
c. Tìm tất cả các phần tử vừa là số nguyên tố vừa là số lẻ.
d. Xoay phải mảng k vị trí (k nhập từ bàn phím).*/

// ========================= GIẢI =======================

/*Câu 1 (2 điểm):
Viết chương trình nhập vào mảng N số nguyên. Sắp xếp mảng theo thứ tự tăng dần và in ra màn hình.*/

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Nhap so luong phan tu: ");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] < a[min])
//             {
//                 min = j;
//             }
//         }
//         int tmp = a[i];
//         a[i] = a[min];
//         a[min] = tmp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

/*Câu 2 (3 điểm):
Số Palindrome là số có giá trị bằng số đảo ngược của nó. Ví dụ:
121, 1221, 12321.

Số N được gọi là số Mega-Palindrome nếu tổng bình phương các chữ số của N là số Palindrome.

Ví dụ:
N = 23 → 2² + 3² = 4 + 9 = 13 (không phải Palindrome)
→ không phải Mega-Palindrome.

Ví dụ:
N = 12 → 1² + 2² = 1 + 4 = 5 (Palindrome 1 chữ số)
→ 12 là Mega-Palindrome.

Yêu cầu:
Viết chương trình nhập vào N (N > 0), kiểm tra N có là số Mega-Palindrome hay không.*/

#include <stdio.h>
#include <math.h>

int sdn(int x)
{
    int t = x;
    int binh = 0;
    while (t > 0)
    {
        binh = binh + pow(t % 10, 2);
        t = t / 10;
    }
    int tong = 0, sum = 0, sdn = 0;
    int k = binh;
    int h = binh;
    int dem = 0;
    while (k > 0)
    {
        dem++;
        k = k / 10;
    }
    int tich = pow(10, dem - 1);

    while (binh > 0)
    {
        sdn = sdn + binh % 10 * tich;
        tich = tich / 10;
        binh = binh / 10;
    }
    if (sdn == h)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n;

    printf("Nhap so n: ");
    scanf("%d", &n);

    if (sdn(n))
    {
        printf("La so Mega-Palindrome");
    }
    else
    {
        printf("Khong la so Mega-Palindrome");
    }

    return 0;
}

/*Câu 3 (5 điểm):
Viết chương trình sử dụng mảng 1 chiều để thực hiện các thao tác sau với N số nguyên:

a. Nhập mảng từ bàn phím.
b. Tìm giá trị lớn nhất, nhỏ nhất và vị trí của chúng.
c. Tìm tất cả các phần tử vừa là số nguyên tố vừa là số lẻ.
d.Xoay phải mảng k vị trí ( k nhập từ bàn phím)*/

// #include <stdio.h>
// #include <math.h>

// int minmax(int a[], int n)
// {
//     int min = a[0];
//     int max = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     printf("\nPhan tu lon nhat la: %d vi tri ", max);
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == max)
//         {
//             printf("%d, ", i);
//         }
//     }
//     printf("\nPhan tu nho nhat la: %d vi tri ", min);
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == min)
//         {
//             printf("%d, ", i);
//         }
//     }
// }

// int snt(int x)
// {
//     if (x < 2)
//         return 0;
//     for (int i = 2; i <= sqrt(x); i++)
//     {
//         if (x % i == 0)
//             return 0;
//     }
//     return 1;
// }
// void sntle(int a[], int n)
// {
//     printf("\nCac phan tu vua la so nguyen to vua la so le la: ");
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 != 0 && snt(a[i]))
//         {
//             printf("%d ", a[i]);
//         }
//     }
// }

// void xoayphaik(int a[], int n, int k)
// {
//     k = k % n;
//     for (int t = 0; t < k; t++)
//     {
//         int cuoi = a[n - 1];
//         for (int i = n - 1; i > 0; i--)
//         {
//             a[i] = a[i - 1];
//         }
//         a[0] = cuoi;
//     }
// }
// int main()
// {

//     int n;
//     printf("\nNhap so luong phan tu mang: ");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nNhap phan tu thu a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
//     minmax(a, n);
//     sntle(a, n);
//     int k;
//     printf("\nNhap k: ");
//     scanf("%d", &k);
//     printf("\nMang sau khi xoay la: \n");
//     xoayphaik(a, n, k);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }