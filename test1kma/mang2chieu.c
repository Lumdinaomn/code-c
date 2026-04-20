// // Nhập và in ra mảng 2 chiều
// //  #include <stdio.h>

// // int main()
// // {
// //     int n, m;
// //     printf("Nhập số lượng hàng và cột của ma trận: ");
// //     scanf("%d%d", &n, &m);
// //     int a[n][m];
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             printf("Nhập giá trị cho phần tử ở hàng %d, cot %d: ", i, j);
// //             scanf("%d", &a[i][j]);
// //         }
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             printf("%d ", a[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }

// // #include <stdio.h>

// // int main()
// // {
// //     long long a[2][3] = {{1, 2, 3}, {4, 5, 6}};
// //     for (int i = 0; i < 2; i++)
// //     {
// //         for (int j = 0; j < 3; j++)
// //         {

// //             printf("%lld ", a[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }

// // =>> 1 2 3
// //     4 5 6\

// // MẢNG 2 CHIỀU KẾT HỢP VỚI HÀM
// //  #include <stdio.h>
// //  #include <math.h>

// // void nhap(int a[100][100], int n, int m)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             scanf("%d", &a[i][j]);
// //         }
// //     }
// // }
// // void in(int a[100][100], int n, int m)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             printf("%d ", a[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }
// // int nt(int n)
// // {
// //     if (n < 2)
// //         return 0;

// //     for (int i = 2; i <= sqrt(n); i++)
// //         if (n % i == 0)
// //             return 0;

// //     return 1;
// // }
// // int main()
// // {
// //     int n, m;
// //     int a[100][100];
// //     scanf("%d%d", &n, &m);
// //     nhap(a, n, m);
// //     in(a, n, m);

// //     int sum = 0;

// //     // In số nguyên tố
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             if (nt(a[i][j]))
// //             {
// //                 printf("%d ", a[i][j]);
// //                 sum += a[i][j];
// //             }
// //         }
// //     }

// //     // In tổng
// //     printf("\n%d", sum);

// //     return 0;
// // }
// // ĐỂ KO TRÀN BỘ NHỚ THÌ KHAI BÁO MẢNG Ở NGOÀI HÀM MAIN

// // TÌM SỐ LỚN NHẤT TRONG MẢNG 2 CHIỀU
// // int res = -1e9;
// // for (int i = 0; i < n; i++)
// // {
// //     for (int j = 0; j < m; j++)
// //     {
// //         if (a[i][j] > res)
// //         {
// //             res = a[i][j];
// //         }
// //     }
// // }
// // TÌM SỐ NHỎ NHẤT TRONG MẢNG
// //     int res = 1e9;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             if (a[i][j] < res)
// //             {
// //                 res = a[i][j];
// //             }
// //         }
// //     }
// //     printf("%d", res);
// // }

// /*CÁC BÀI TẬP MẢNG 2 CHIỀU
// BÀI 1: KIỂM TRA TÍNH CHẤT CỦA PHẦN TỬ TRONG MẢNG 2 CHIỀU
// BÀI 2: LÀM VIỆC VỚI CÁC PHẦN TỬ TRÊN HÀNG VÀ CỘT: VD:TÌM HÀNG CÓ TỔNG PHẦN TỬ LỚN NHẤT,,,,
// BÀI 3: LÀM VIỆC VỚI TAM GIÁC TRÊN , TAM GIÁC DƯỚI , ĐƯỜNG CHÉO CHÍNH , ĐƯỜNG CHÉO PHỤ
// BÀI 4: MA TRẬN XOÁY ÓC
// BÀI 5: TÍNH TỔNG , TÍNH HIỆU , TÍNH TÍCH , TÌM MA TRẬN NGHỊCH ĐẢO
// */

// /*BÀI 1:
// n = 2
// m = 3
// Nhap mang:
// 1 2 3
// 4 5 6
// Tong cac phan tu trong mang la: 21*/
// // #include <stdio.h>

// // int main()
// // {
// //     int a[10][10], n, m;
// //     scanf("%d %d", &n, &m);
// //     if (n <= 0 || m <= 0 || n >= 10 || m >= 10)
// //     {
// //         printf("Vui lòng nhập lại n , m");
// //         return 0;
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             scanf("%d", &a[i][j]);
// //         }
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             printf("%d ", a[i][j]);
// //         }
// //         printf("\n");
// //     }
// //     int sum = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             sum = sum + a[i][j];
// //         }
// //     }
// //     printf("Tong cac phan tu trong mang la: %d", sum);

// //     return 0;
// // }

// /*Bài 2:n = 3
// Nhap mang: 1 3 2
// Gia tri lon nhat la: 3 */

// // #include <stdio.h>

// // int main()
// // {
// //     int n, a[10];
// //     scanf("%d", &n);
// //     if (n <= 0 || n >= 10)
// //     {
// //         printf("Vui lòng nhập lại số lượng mảng!");
// //         return 0;
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         scanf("%d", &a[i]);
// //     }
// //     int max = a[0];
// //     for (int i = 1; i < n; i++)
// //     {
// //         if (a[i] > max)
// //             max = a[i];
// //     }
// //     printf("So lon nhat trong mang là: %d", max);
// // }

// /*Bài 3: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. In ra màn hình các phần tử lớn nhất của các hàng.
// n = 2
// m = 3
// Nhap mang:
// 1 2 3
// 4 6 5
// Cac phan tu lon nhat la: 3 6*/
// // #include <stdio.h>

// // int main()
// // {
// //     int a[10][10], n, m;
// //     scanf("%d %d", &n, &m);
// //     if (n <= 0 || m <= 0 || n >= 10 || m >= 10)
// //     {
// //         printf("Vui lòng nhập lại n , m");
// //         return 0;
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             scanf("%d", &a[i][j]);
// //         }
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             printf("%d ", a[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         int max = a[i][0];
// //         for (int j = 1; j < m; j++)
// //         {
// //             if (a[i][j] > max)
// //             {
// //                 max = a[i][j];
// //             }
// //         }
// //         printf("%d ", max);
// //     }

// //     return 0;
// // }

// /*Bài 4: Viết chương trình nhập vào 2 số nguyên dương n và m (2 <= n <= 10, 2 <= m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính tổng các giá trị biên của mảng vừa tạo.
// n = 3
// m = 3
// Nhap mang:
// 1 2 3
// 4 5 6
// 7 8 9
// Tong cac gia tri bien la: 40*/
// #include <stdio.h>

// int main()
// {
//     int a[10][10], n, m;
//     scanf("%d %d", &n, &m);
//     if (n <= 2 || m <= 2 || n >= 10 || m >= 10)
//     {
//         printf("Vui lòng nhập lại n , m");
//         return 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
//             {
//                 sum += a[i][j];
//             }
//         }
//     }
//     printf("%d", sum);
// }

// THUẬT TOÁN BUBBLE SORT : THUẬN TOÁN SẮP XẾP MẢNG
// sử dụng 2 vòng for lòng nhau để sắp xếp
// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     int a[n] = {6, 2, 3, 9, 5};
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
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

// Bài 2: sắp sắp chữ cái theo an fa b dựa vào bảng mã ascii
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int n;
//     char characters[10];

//     cin >> n;

//     // Nhập mảng ký tự
//     for (int i = 0; i < n; i++)
//     {
//         cin >> characters[i];
//     }

//     // Sắp xếp tăng dần
//     for (int i = n - 1; i > 0; i--)
//     {
//      d   for (int j = 0; j < i; j++)
//         {
//             if (characters[j] > characters[j + 1])
//             {
//                 char tmp = characters[j];
//                 characters[j] = characters[j + 1];
//                 characters[j + 1] = tmp;
//             }
//         }
//     }

//     // In kết quả
//     for (int i = 0; i < n; i++)
//     {
//         cout << characters[i] << " ";
//     }

//     return 0;
// }
