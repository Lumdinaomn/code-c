/*Bài 1: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên. Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.
n = 4
Nhap mang: 2 3 1 4 6
Mang sau khi sap xep: 6 4 3 2 1*/
// #include <stdio.h>

// int main()
// {
//     int n, a[10];
//     printf("Nhập n: ");
//     scanf("%d", &n);
//     if (n < 2 || n > 10)
//     {
//         printf("Nhập lại n!");
//         return 0;
//     }
//     printf("Nhập mảng: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = n - 1; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 int tmp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = tmp;
//             }
//         }
//     }
//     printf("Mảng sau khi sắp xếp là: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

/*Bài 2: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên và nhập số nguyên k. Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không, nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).
n = 4
Nhap mang: 1 2 3 4
k = 3
Ket qua: 0 1*/

// #include <stdio.h>

// int main()
// {
//     int n;
//     int a[10];
//     printf("Nhập n: ");
//     scanf("%d", &n);
//     if (n < 2 || n > 10)
//     {
//         printf("Vui lòng nhập lại n!");
//         return 0;
//     }
//     printf("Nhập mảng: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int k;
//     printf("Nhập k: ");
//     scanf("%d", &k);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == k)
//             {
//                 printf("%d %d", i, j);
//             }
//         }
//     }
//     return 0;
// }

/*Bài 3: Viết chương trình nhập vào 2 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra tổng của 2 ma trận.
n = 2
m = 3
Nhap ma tran 1:
1 2 3
1 2 3
Nhap ma tran 2:
2 3 4
2 3 4
Tong 2 ma tran:
3 5 7
3 5 7 */

// #include <stdio.h>

// int main()
// {
//     int n, m, a[10][10], b[10][10], c[10][10];
//     printf("Nhập n = ");
//     scanf("%d", &n);
//     printf("Nhập m = ");
//     scanf("%d", &m);
//     if (n <= 0 || m <= 0 || n > 10 || m > 10)
//     {
//         printf("vui lòng nhập lại n,m!");
//         return 0;
//     }
//     printf("Nhập ma trận 1: \n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Nhập ma trận 2: \n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("Tổng 2 ma trận là :\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             c[i][j] = a[i][j] + b[i][j];
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*Bài 4: Viết chương trình nhập vào 1 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra màn hình tổng của các số lẻ xuất hiện trong ma trận.
n = 2
m = 3
Nhap ma tran:
1 2 3
4 5 6
Tong cac so le la: 9
*/
#include <stdio.h>

int main()
{
    int n, m, a[10][10];
    printf("Nhập n = ");
    scanf("%d", &n);
    printf("Nhập m = ");
    scanf("%d", &m);
    if (n <= 0 || m <= 0 || n > 10 || m > 10)
    {
        printf("vui lòng nhập lại n,m!");
        return 0;
    }
    printf("Nhập ma trận : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 == 1)
            {
                sum += a[i][j];
            }
        }
    }
    printf("Tổng các số lẻ là: %d", sum);
}