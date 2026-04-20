/*#include <stdio.h>
int main(){
    int thang;

    scanf ("%d", &thang);
    if(thang >0 && thang <=12){
        switch(thang){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 ngay");
            break;
            case 4: case 6: case 9: case 11:
            printf("30 ngay");
            break;
            case 2: printf("28 hoac 29 ngay");
            break;


        }
    }
    else {
        printf("khong phai thang trong nam");


    }
    return 0;
}*/
// ting tong tu 1-n dung for
/*#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int sum =0;
    for(int i =1 ; i<=n ; i++){
         sum = sum + i;
    }
    printf("%d", sum);
   return 0;

} */
// in ra cac boi cua 1 so
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 3 == 0)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }
/*
#include <stdio.h>
int main(){
   for(int i =1 ; i<=5 ; i++){
    for( int j=1 ; j<=5 ; j++){
        printf ("%d %d\n", i,j);
    }
   }
}
*/
// VONG LAP WHILE

/*#include <stdio.h>
int main(){
    int i = 1;
    while ( i<=5){
        printf ("%d \n", i);
        if(i==5)
        continue;
        i++;

    }
    printf("gia tri cua i sau vong lap la: %d",i);
}

*/

//DEM SO LUONG CHU SO TRONG MOT SO NGUYEN\

/*#include <stdio.h>
int main(){
    int n;
    scanf ("%d", &n);
    int sl=0;
    while (n!=0){
        ++sl;
        n=n/10;
    }
    printf("%d", sl);
}*/

// TINH TONG CAC CHU SO CUA MOT SO NGUYEN
/*#include <stdio.h>
int main(){
    int n;
    scanf ("%d", &n);
    int sum = 0;
    int sl=0;
    while (n!=0){
        ++sl;
        n=n/10;
        sum = sum + sl;
    }
    printf("%d", sum);
}*/

// VONG LAP DO WHILE

// nhap gia n la so ko am , neu am nhap lai

/*#include <stdio.h>
int main(){
    int i;
    do{
        scanf( "%d",&i);
        if(i<0){
            printf("nhap sai , vui long nhap lai\n");
        }
    } while(i<0);
}*/

// BÀI 1: NHẬP 2 SỐ N VÀ M TÌM BỘI CHUNG NHỎ NHẤT CỦA 2 SỐ

#include <stdio.h>

int main()
{
    int n, m;
    printf("Nhập n: ");
    scanf("%d", &n);
    printf("Nhập m: ");
    scanf("%d", &m);
    for (int i = 1; i <= n * m; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            printf("Bội chung nhỏ nhất của n và m là: %d\n", i);
            break;
        }
    }
    for (int i = n * m; i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            printf("Ước chung lớn nhất của n và m là: %d", i);
            break;
        }
    }
}
