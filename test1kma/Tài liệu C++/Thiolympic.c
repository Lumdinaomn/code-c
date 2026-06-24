///*Bài 1: */
//
#include <stdio.h>

int main()
{
    int m, n, a[99][99], sum = 0, c[8];
    int hang[99] = {0};
    int cot[99] = {0};
    int dem = 0;
    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                hang[i] = 1;
                cot[j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (hang[i] == 1)
            {
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cot[j] == 1)
            {
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
    }
    //    int toan=sum;
    //    while(toan!=0){
    //    	toan=toan/10;
    //    	dem++;
    //	}
    //
    //    for ( int i = 0 ; i < 8-dem ; i ++){
    //    	printf("0");
    //
    //	}
    //
    //    printf("%d",sum);
    printf("%08d", sum);
    return 0;
}
/*Bài 2: */

// #include <stdio.h>

// int main()
// {
//     int n, k, a[n];
//     printf("Nhap so luong thanh vien: ");
//     scanf("%d", &n);
//     printf("Nhap so nhom can chia: ");
//     scanf("%d", &k);
//     printf("Nhap so diem tung thanh vien: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", a[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     }

//     int toan = sum / k;
//     if (sum % k == 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (toan > a[i])
//             {
//                 printf("YES");
//             }
//         }
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }
// #include <stdio.h>

// int n, k;
// int a[100];
// int used[100];
// int target;

// int thuChia(int nhom, int tong, int vt)
// {
//     if (nhom == k)
//         return 1;

//     if (tong == target)
//         return thuChia(nhom + 1, 0, 0);

//     for (int i = vt; i < n; i++)
//     {
//         if (used[i] == 0 && tong + a[i] <= target)
//         {
//             used[i] = 1;

//             if (thuChia(nhom, tong + a[i], i + 1))
//                 return 1;

//             used[i] = 0;
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int sum = 0;

//     scanf("%d%d", &n, &k);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         sum += a[i];
//         used[i] = 0;
//     }

//     if (sum % k != 0)
//     {
//         printf("NO");
//         return 0;
//     }

//     target = sum / k;

//     if (thuChia(0, 0, 0))
//         printf("YES");
//     else
//         printf("NO");

//     return 0;
// }
