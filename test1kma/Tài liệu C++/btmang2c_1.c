// BÀI TẬP VÍ DỤ TRONG MẢNG 2 CHIỀU : Viết chương trình nhập vào hai ma trận hai chiều, tính tổng của hai ma trận

// #include <stdio.h>

// int main()
// {
//     int n1, m1, n2, m2, i, j;
//     float A[99][99], B[99][99], C[99][99];

//     printf("Nhap so hang cua ma tran 1: ");
//     scanf("%d", &n1);
//     printf("Nhap so cot cua ma tran 1: ");
//     scanf("%d", &m1);
//     printf("Nhap so hang cua ma tran 2: ");
//     scanf("%d", &n2);
//     printf("Nhap so cot cua ma tran 2: ");
//     scanf("%d", &m2);

//     while (n1 != n2 || m1 != m2)
//     {
//         printf("Hai ma tran khong cung kich thuoc, nhap lai!\n");

//         printf("Nhap so hang cua ma tran 1: ");
//         scanf("%d", &n1);
//         printf("Nhap so cot cua ma tran 1: ");
//         scanf("%d", &m1);
//         printf("Nhap so hang cua ma tran 2: ");
//         scanf("%d", &n2);
//         printf("Nhap so cot cua ma tran 2: ");
//         scanf("%d", &m2);
//     }

//     // Nhap ma tran 1
//     for (i = 0; i < n1; i++)
//         for (j = 0; j < m1; j++)
//         {
//             printf("A[%d][%d] = ", i, j);
//             scanf("%f", &A[i][j]);
//         }

//     // Nhap ma tran 2
//     for (i = 0; i < n2; i++)
//         for (j = 0; j < m2; j++)
//         {
//             printf("B[%d][%d] = ", i, j);
//             scanf("%f", &B[i][j]);
//         }

//     // Tinh tong
//     for (i = 0; i < n1; i++)
//         for (j = 0; j < m1; j++)
//             C[i][j] = A[i][j] + B[i][j];
// In A
// printf("\nMa tran A:\n");
// for (i = 0; i < n1; i++)
// {
//     for (j = 0; j < m1; j++)
//         printf("%6.2f", A[i][j]);
//     printf("\n");
// }

// // In B
// printf("\nMa tran B:\n");
// for (i = 0; i < n1; i++)
// {
//     for (j = 0; j < m1; j++)
//         printf("%6.2f", B[i][j]);
//     printf("\n");
// }

//     // In ma tran tong
//     printf("Ma tran tong:\n");
// for (i = 0; i < n1; i++)
// {
//     for (j = 0; j < m1; j++)
//         printf("%7.2f", C[i][j]);
//     printf("\n");
// }

// return 0;
// }

/*Bài tập 1: Câu 28: Viết chương trình tính tích hai ma trận: Cnxp = Anxm  Bmxp. In các ma trận ra màn
hình.
*/

#include <stdio.h>

int main()
{
    int n1, n2, m1, m2, a[99][99], b[99][99], c[99][99];

    printf("Nhập số hàng mt 1: ");
    scanf("%d", &n1);
    printf("Nhập số cột mt 1: ");
    scanf("%d", &m1);

    printf("Nhập số hàng mt 2: ");
    scanf("%d", &n2);
    printf("Nhập số cột mt 2: ");
    scanf("%d", &m2);

    // kiểm tra điều kiện nhân
    while (m1 != n2)
    {
        printf("Khong the nhan 2 ma tran!\n");
        printf("Vui long nhap lai kich thuoc.\n");

        printf("Nhap so hang mt 1: ");
        scanf("%d", &n1);

        printf("Nhap so cot mt 1: ");
        scanf("%d", &m1);

        printf("Nhap so hang mt 2: ");
        scanf("%d", &n2);

        printf("Nhap so cot mt 2: ");
        scanf("%d", &m2);
    }

    printf("Nhập ma trận 1:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Nhập ma trận 2:\n");
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // nhân ma trận
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Ma trận sau khi nhân là:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*Câu 29: Viết chương trình nhập vào ma trận n hàng  m cột.
a.  Sắp xếp các hàng  theo chiều tăng  dần
b.  Tính tổng các hàng  và in kết quả.*/

// #include <stdio.h>

// int main()
// {
//     int n, m, a[99][99];

//     printf("Nhap so hang cua mt: ");
//     scanf("%d", &n);
//     printf("Nhap so cot cua mt: ");
//     scanf("%d", &m);S
//     if (n <= 0 || m <= 0)
//     {
//         printf("Vui long nhap lai!");
//         return 0;
//     }
//     printf("Nhap ma tran: \n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < n; i++) // duyệt từng hàng
//     {
//         for (int j = 0; j < m - 1; j++)
//         {
//             for (int k = j + 1; k < m; k++)
//             {
//                 if (a[i][j] > a[i][k])
//                 {
//                     // đổi chỗ
//                     int temp = a[i][j];
//                     a[i][j] = a[i][k];
//                     a[i][k] = temp;
//                 }
//             }
//         }
//     }
//     printf("Ma tran sau khi sap xep:\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;

//         for (int j = 0; j < m; j++)
//         {
//             sum += a[i][j];
//         }

//         printf("Tong hang %d = %d\n", i + 1, sum);
//     }

//     return 0;
// }