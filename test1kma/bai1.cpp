///*Bài t?p 1: Câu 28: Vi?t chuong trình tính tích hai ma tr?n: Cnxp = Anxm ? Bmxp. In các ma tr?n ra màn
//hình.
//*/
//
//#include <stdio.h>
//
//int main()
//{
//    int n1, n2, m1, m2, a[99][99], b[99][99], c[99][99];
//
//    printf("Nh?p s? hàng mt 1: ");
//    scanf("%d", &n1);
//    printf("Nh?p s? c?t mt 1: ");
//    scanf("%d", &m1);
//
//    printf("Nh?p s? hàng mt 2: ");
//    scanf("%d", &n2);
//    printf("Nh?p s? c?t mt 2: ");
//    scanf("%d", &m2);
//
//    // ki?m tra di?u ki?n nhân
//    if (m1 != n2)
//    {
//        printf("Không th? nhân 2 ma tr?n!");
//        return 0; 
//    }
//
//    printf("Nh?p ma tr?n 1:\n");
//    for (int i = 0; i < n1; i++)
//    {
//        for (int j = 0; j < m1; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    printf("Nh?p ma tr?n 2:\n");
//    for (int i = 0; i < n2; i++)
//    {
//        for (int j = 0; j < m2; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//
//    // nhân ma tr?n
//    for (int i = 0; i < n1; i++)
//    {
//        for (int j = 0; j < m2; j++)
//        {
//            c[i][j] = 0;
//            for (int k = 0; k < m1; k++)
//            {
//                c[i][j] += a[i][k] * b[k][j];
//            }
//        }
//    }
//
//    printf("Ma tr?n sau khi nhân là:\n");
//    for (int i = 0; i < n1; i++)
//    {
//        for (int j = 0; j < m2; j++)
//        {
//            printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

///*Bài 1: */
//
//#include <stdio.h>
//
//int main()
//{
//    int m, n, a[99][99],sum=0,c[8];
//    int hang[99]={0};
//    int cot[99]={0};
//    int dem=0;
//    printf("Nhap so hang: ");
//    scanf("%d",&m);
//    printf("Nhap so cot: ");
//    scanf("%d",&n);
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (a[i][j] == 0)
//            {
//                hang[i]=1;
//                cot[j]=1;
//                
//            }
//        }
//    }
//     for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (hang[i]==1)
//            {
//               a[i][j]=0;
//                
//            }
//        }
//    }
//      for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (cot[j]==1)
//            {
//               a[i][j]=0;
//                
//            }
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//      for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//           sum=sum+a[i][j];
//        }
//    }
////    int toan=sum;
////    while(toan!=0){
////    	toan=toan/10;
////    	dem++;
////	}
////    
////    for ( int i = 0 ; i < 8-dem ; i ++){
////    	printf("0");
////    
////	}
////	
////    printf("%d",sum);
//printf("%08d", sum);
//    return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int n,k,a[n];
//	printf("Nhap so luong thanh vien: ");
//	scanf("%d",&n);
//	printf("Nhap so nhom can chia: ");
//	scanf("%d",&k);
//	printf("Nhap so diem tung thanh vien: ");
//	for( int i = 0 ; i < n; i++){
//		scanf("%d",a[i]);
//	}
//	int sum = 0 ; 
//	for ( int i = 0 ; i < n ; i ++){
//		sum = sum + a[i];
//	}
//
//	int toan = sum / k;
//	if(sum % k ==0){
//		for (int i = 0 ; i < n ; i ++){
//			if ( toan > a[i]){
//				printf("YES");
//			}
//		}
//	} else {
//		printf("NO");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void doicoso(int n, int coso)
//{
//    int i;
//    int a[99];
//    while (n > 0)
//    {
//        a[i] = n % coso;
//        n = n / coso;
//        i++;
//    }
//    for (int j = i - 1; j >= 0; j--)
//    {
//        if (a[j] >= 10)
//        {
//            printf("%c", a[j] + 55);
//        }
//        else
//        {
//            printf("%d", a[j]);
//        }
//    }
//}
//
//int main()
//{
//    int a;
//    scanf("%d", &a);
//
//    printf("He so 2: ");
//    doicoso(a, 2);
//
//    printf("\nHe so 8: ");
//    doicoso(a, 8);
//
//    printf("\nHe so 16: ");
//    doicoso(a, 16);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n, a[99];
//    scanf ("%d",&n);
//    int tich = 1;
//    int i = 0;
//    for ( i = 0 ; i >0; i ++){
//        a[i]=n%10;
//        n= n/10;
//        i++;
//    }
//    while( n> 0){
//    	tich = tich * (n%10);
//    	n= n/10;
//	}
//    printf("%d",tich);
//
//    return 0;
//}	

//#include <stdio.h>
//#include <math.h>
//// int lucky( int f, int  c[99]){
////     for ( int i = 0 ; i > 3 ; i ++){
////         c[i]=f%10;
////         f=f/10;
////         i++;
////     }
////     int tong = 0;
////     for ( int h = 0 ; h > 3 ; h ++){
////         tong = tong + c[h];
////     }
////     return tong;
//
//// }
//
//int amtrong(int i)
//{
//    int b[99];
//    for (int k = 0; k < 3; k++)
//    {
//        b[k] = i % 10;
//        i = i / 10;
//        k++;
//    }
//    int sum = 0;
//    for (int j = 0; j < 3; j++)
//    {
//        sum = sum + pow(b[j], 3);
//    }
//    if (sum == i)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int n, a[99], c[99];
//    scanf("%d", &n);
//    while (n < 100 || n > 9999)
//    {
//        printf("Vui long nhap lai n: ");
//        scanf("%d", &n);
//    }
//    for (int i = 0; i > 3; i++)
//    {
//        c[i] = n % 10;
//        n = n / 10;
//        i++;
//    }
//    int tich = 1;
//    int k;
//    while(k > 0){
//     tich = tich *(n%10);
//     n = n /10;
//
//    }
//    amtrong(tich);
//    if (amtrong(tich))
//    {
//        printf("YES");
//    }
//    else
//    {
//
//        printf("NO");
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int neon(int k)
//{
//    int t = pow(k, 2);
//    int tong = 0;
//    while (t > 0)
//    {
//        tong = tong + (t % 10);
//        t = t / 10;
//    }
//    if (tong == k)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    int n;
//    printf("Nhap n: ");
//    scanf("%d", &n);
//    if (neon(n) == 1)
//    {
//        int tong2 = 0;
//        int l = n;
//        while (l > 0)
//        {
//            tong2 = tong2 + (l % 10);
//            l = l / 10;
//        }
//        if (neon(tong2) == 1)
//        {
//            printf("%d la so double-neon", n);
//        }
//        else
//        {
//            printf("%d ko ph?i la so double-neon", n);
//        }
//    }
//    else
//        ("%d khong la so double - neon", n);
//
//    return 0;
//}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n;
//    printf("Nh?p n: ");
//    scanf("%d",&n);
//    if ( n=0){
//        
//        printf("%d bang 0",n);
//    } else if(n<0){
//        printf("so âm");
//    } else {
//        if(n<2){
//            printf("No");
//        } else if(n==2){
//            printf("yes");
//        } else {
//            for ( int i = 2 ; i < sqrt(n); i++){
//                if(n%i==0){
//                    printf("no");
//                }else {
//                    printf("yes");
//                }
//            }
//        }
//    }
//    return 0;
//}

//TÌM UUOC CHUNG LON NHAT CUA MOT DAY SO 
//#include <stdio.h>
//
//int main()
//{
//    int n;
//
//    printf("Nhap so luong phan tu mang: ");
//    scanf("%d", &n);
//
//    if (n <= 0)
//    {
//        printf("So luong phan tu khong hop le");
//        return 0;
//    }
//
//    int a[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        printf("Nhap phan tu a[%d]: ", i);
//        scanf("%d", &a[i]);
//    }
//
//    // Tim so nho nhat
//    int min = a[0];
//
//    for (int i = 1; i < n; i++)
//    {
//        if (a[i] < min)
//        {
//            min = a[i];
//        }
//    }
//
//    int ucln = 1;
//
//    // Thu tu min -> 1
//    for (int i = min; i >= 1; i--)
//    {
//        int check = 1;
//
//        for (int j = 0; j < n; j++)
//        {
//            if (a[j] % i != 0)
//            {
//                check = 0;
//                break;
//            }
//        }
//
//        if (check == 1)
//        {
//            ucln = i;
//            break;
//        }
//    }
//
//    printf("Uoc chung lon nhat cua day so la: %d", ucln);
//
//    return 0;
//}



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

void timkiem1(SV a[], int n, char m[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(m, a[i].ma) == 0)
        {
            in(a[i]);
            return;
        }
    }

    printf("Khong tim thay sinh vien");
}
void timkiem2(SV a[],int n ){
    float res = 0;
    int vitri;
    for ( int i = 0 ; i < n ; i ++){
        if(a[i].gpa>res){
            vitri = i ;
        }
    }
    in(a[vitri]);
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
    timkiem2(a,n);

    return 0;
}
