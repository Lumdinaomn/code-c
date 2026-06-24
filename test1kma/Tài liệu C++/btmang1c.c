/*Câu 23: Viết chương trình nhập vào dãy số thực, cho biết số x nào đó xuất hiện bao nhiêu
lần trong dãy (x là số nhập vào) cùng với vị trí xuất hiện tương ứng.
*/
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Nhập số lượng phần tử: ");
//     scanf("%d", &n);

//     float a[1000];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Nhập phần tử thứ[%d]: ", i);
//         scanf("%f", &a[i]);
//     }
//     int dem = 0;
//     int vitri;
//     float x;
//     printf("Nhập x: ");
//     scanf("%f", &x);
//     int b[10000];
//     for (int i = 0; i < n; i++)
//     {
//         if (x == a[i])
//         {

//             dem++;
//         }
//     }
//     printf("Số %f xuất hiện %d lần trong dãy  %d \n", x, dem);
//     printf("Xuất hiện ở các vị trí: ");
//     for (int i = 0; i < n; i++)
//     {
//         if (x == a[i])
//         {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }

/*Câu 24: Viết chương trình nhập vào dãy số thực, sắp xếp dãy theo chiều tăng /giảm dần*/

#include <stdio.h>

int main()
{
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

/*Câu 25: Viết chương trình nhập vào dãy số, thay thế các phần tử có giá trị âm trong mảng
bằng giá trị 0.*/
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Nhập số lượng phần tử: ");
//     scanf("%d", &n);

//     int a[1000];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Nhập phần tử thứ[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < 0)
//         {
//             a[i] = 0;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

/*Câu 26: Viết chương trình nhập vào một dãy số nguyên, hãy sắp xếp dãy theo nguyên tắc:
số âm đầu dãy, số dương cuối dãy*/

// #include <stdio.h>


// int main()
// {
//     int n;
//     printf("Nhập số lượng phần tử: ");
//     scanf("%d", &n);

//     int a[1000];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Nhập phần tử thứ[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < 0)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[i] > a[j])
//                 {
//                     int temp = a[i];
//                     a[i] = a[j];
//                     a[j] = temp;
//                 }
//             }
//             printf("%d ", a[i]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[i] < a[j])
//                 {
//                     int temp = a[i];
//                     a[i] = a[j];
//                     a[j] = temp;
//                 }
//             }
//             printf("%d ", a[i]);
//         }
//     }
// }

/*Câu 27: Viết chương trình nhập vào dãy số nguyên, đếm tần suất xuất hiện của các số trong
dãy.
Ví dụ: cho dãy: {1, 3, 4, 1, 3, 1}, kết quả in ra là:
Số 1 xuất hiện 3 lần
Số 3 xuất hiện 2 lần
Số 4 xuất hiện 1 lần
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int a[1000];
    int danhdau[1000] = {0};

    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu [%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (danhdau[i] == 1)
            continue;

        int dem = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                dem++;
                danhdau[j] = 1;
            }
        }

        printf("So %d xuat hien %d lan\n", a[i], dem);
    }

    return 0;
}