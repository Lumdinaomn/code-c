// /*Ví dụ 1:Viết chương trình nhập vào mảng 1 chiều, in ra các số nguyên tố của mảng, tính
// tổng các số nguyên tố đó.*/
// #include <stdio.h>
// #include <math.h>
// void Nhap(int A[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("A[%d]=", i);
//         scanf("%d", &A[i]);
//     }
// }
// // hàm in ma trận
// void In(int A[], int n)
// {

//     printf("Mang da nhap: \n");
//     for (int i = 0; i < n; i++)
//         printf("%5d", A[i]);
// }
// // Hàm kiểm tra số nguyên tố
// int check(int k)
// {
//     int i;
//     if (k < 2)
//         return 0;
//     else if (k == 2)
//         return 1;
//     else if (k % 2 == 0)
//         return 0;
//     else
//     {
//         for (i = 2; i <= sqrt(k); i++)
//             if (k % i == 0)
//                 return 0;
//         return 1;
//     }
// }

// int main()
// {
//     int A[99], n, i, T = 0;
//     printf("Nhap so phan tu:");
//     scanf("%d", &n);
//     Nhap(A, n);
//     In(A, n);
//     printf("\nCac so nguyen to cua mang:\n");
//     for (i = 0; i < n; i++)
//         if (check(A[i]) == 1)
//         {
//             printf("%5d", A[i]);
//             T = T + A[i];
//         }
//     printf("\nTong cac so nguyen to: %d", T);

//     return 0;
// }

/*BÀI TẬP VÍ DỤ 2: Ví dụ 2: Viết chương trình tìm tổng của hai ma trận bằng cách sử dụng hàm in ma trận, hàm
nhập ma trận*/
// #include <stdio.h>

// void Nhap(float A[][99], int n, int m)
// {
//     int i, j;
//     for (i = 0; i < n; i++)
//         for (j = 0; j < m; j++)
//         {
//             printf("[%d,%d]=", i, j);
//             scanf("%f", &A[i][j]);
//         }
// }
// // In ma tr?n
// void In(float A[99][99], int n, int m)
// {
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//             printf("%7.2f", A[i][j]);
//         printf("\n");
//     }
// }
// float tinh(float C[99][99], float B[99][99], float A[99][99], int n1, int m1)
// {
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < m1; j++)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }
// int main()
// {
//     int n1, m1, n2, m2, i, j;
//     float A[99][99], B[99][99], C[99][99];
//     // Nh?p ma tr?n 1
//     printf("Nhap thong tin ma tran 1:\n");
//     printf("Nhap so hang:");
//     scanf("%d", &n1);
//     printf("Nhap so cot:");
//     scanf("%d", &m1);

//     // Nh?p ma tr?n 2
//     printf("Nhap thong tin ma tran 2:\n");
//     printf("Nhap so hang:");
//     scanf("%d", &n2);
//     printf("Nhap so cot:");
//     scanf("%d", &m2);
//     while (n1 != n2 || m1 != m2)
//     {
//         printf("Hai ma tran khong cung kich thuoc, nhap lai!\n");

//         printf("Nhap so hang ma tran 1: ");
//         scanf("%d", &n1);

//         printf("Nhap so cot ma tran 1: ");
//         scanf("%d", &m1);

//         printf("Nhap so hang ma tran 2: ");
//         scanf("%d", &n2);

//         printf("Nhap so cot ma tran 2: ");
//         scanf("%d", &m2);
//     }
//     // Nh?p ma tr?n
//     printf("Nhap ma tran A:\n");
//     Nhap(A, n1, m1);

//     printf("Nhap ma tran B:\n");
//     Nhap(B, n2, m2);

//     // Tính t?ng hai ma tr?n
//     // for (i = 0; i < n1; i++)
//     //     for (j = 0; j < m1; j++)
//     //         C[i][j] = A[i][j] + B[i][j];
//     tinh(C, A, B, n1, m1);
//     // In ma tran t?ng
//     printf("Ma tran A: \n");
//     In(A, n1, m1);
//     printf("Ma tran B: \n");
//     In(B, n2, m2);
//     printf("Ma tran tong: \n");
//     In(C, n1, m1);
//     return 0;
// }

/*Câu 30: Viết chương trình con đổi một số nguyên dương ở hệ thập phân sang dạng biểu diễn
ở cơ số a. Sau đó gọi hàm để đổi một số nhập vào từ bàn phím sang dạng biểu diễn ở các cơ
số: 2, 8, 16.*/

#include <stdio.h>

void doicoso(int n, int coso)
{
    int i;
    int a[99];
    while (n > 0)
    {
        a[i] = n % coso;
        n = n / coso;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if (a[j] >= 0)
        {
            printf("%c", a[j] + 1);
        }
        else
        {
            printf("%d", a[j]);
        }
    }
}

int main()
{
    int a;
    scanf("%d", &a);

    printf("He so 2: ");
    doicoso(a, 2);

    printf("He so 8: ");
    doicoso(a, 8);

    printf("He so 16: ");
    doicoso(a, 16);

    return 0;
}