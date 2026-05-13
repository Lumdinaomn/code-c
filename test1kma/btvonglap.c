// Bài 1: Tính tổng của 10 số nguyên bất kì được nhập vào từ bàn phím

/*#include <stdio.h>

int main() {
    int i, x, sum = 0;

    printf("Nhap 10 so nguyen:\n");
    for(i = 1; i <= 10; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &x);
        sum += x;
    }

    printf("Tong cua 10 so nguyen vua nhap la: %d", sum);

    return 0;
}*/

// Bài 2: Kiểm tra một số có phải là số nguyên tố hay không
// Cách 1
/*#include <stdio.h>
int main(){
    int n;
    int dem = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==2){
        printf("%d la so nguyento ",n);
    } else {
        printf("%d khong phai la so nguyen to",n);
    }
}
*/
// Cách 2
/*#include <stdio.h>
#include <math.h>
int main(){
    int n , i, check = 1; //ban đầu ví dụ n là số nguyên tố
    printf("Nhap so n: ");
    scanf ("%d", &n);
    if(n<=1){
        check = 0; // n khonh phai la so nguyen tó
    } else {
        for (i=2 ; i<= sqrt(n) ; i++) {
            if(n%i==0){
                check =0; // n khong phai la so nguyen to
                break;
            }
        }
    }
    if(check){
        printf ("%d la so nguyen to",n);
    } else {
        printf ("%d khong phai la so nguyen to",n);
    }

}*/
// Bài 3: In ra các số dương chẵn từ 1 đến 20 trên cùng 1 dòng, cách nhau bởi một tab
/*#include <stdio.h>

int main(){
    for (int i=1 ; i<=20 ; i++){
       if(i%2==0){

           printf("%d \t", i);
       }
    }

}
*/

// Bài 4: Tìm tổng của các số lẻ từ 1 -> 100

/*#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 1 ; i <=100 ; i++){
        if(i%2==1){
            sum = sum + i;

          }


    }

    printf ("%d ", sum);
}*/

// Bài 5: Viết chương trình nhập vào số n và in ra các ước của số n đó

/*#include <stdio.h>

int main(){
    int n;
    scanf ("%d", &n);
     for(int i =1 ; i <=n ; i++){
        if(n%i==0){
            printf ("%d",i);
        }
     }
}*/

/*Bài 7: Viết chương trình tính S = 1 + 1/2 + 1/3 + … + 1/N*/

/*#include <stdio.h>

int main(){
    int n;
    scanf( " %d", &n);
    float sum=0.00;
    for(int i=1 ; i<=n;i++){
        sum = sum + (float)1/i;

    }
     printf( "%.3f", sum);
}*/

// Bài 8: Tính giá trị giai thừa: n!. Trong đó n nhập vào từ bàn phím. In kết quả ra màn hình:

/*#include <stdio.h>

int main(){
    int n;
    scanf ("%d ", &n);
    int gt=1;
    for( int i =1 ; i<=n; i++){
        gt = gt*i;
    }
    printf ("%d", gt);
}*/
// Bài 9: Tính tổng: Với giá trị của n nhập vào từ bàn phím s=1+1/2!+1/3!+...+1/n!
/*#include <stdio.h>

int main(){
    int n;
     float sum = 0;
     int gt = 1;
    scanf("%d",&n);
    for(float i = 1; i <=n;i++){
          gt=gt*i;
          sum = sum + (float)1/gt;


    }
    printf ("%.3f", sum);

}*/

// Bài 10: Viết chương trình tính số thứ n của dãy fibonaci biết dãy f(n) = f(n-1) +f(n-2), n > 2 và f(1) = 1, f(2) = 1.
/*#include <stdio.h>

int main(){
    int n;
    scanf ("%d", &n);
   long long f1 = 1, f2 = 1, fn;
    if (n==1 || n==2){
        printf ("1");
    }
    else {

        for(int i = 3; i <= n; i++){
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        printf("%lld", fn);
    }
}*/
/*Câu 19: Nhập vào số n, kiểm tra n có là số may mắn hay không?. n là số may mắn nếu tổng các
chữ số của n chia hết cho 9. Ví dụ: số 12345 là số không may mắn vì 1+2+3+4+5 = 15, không chia
hết cho 9. Số 12357 là số may mắn vì 1+2+3+5+7 = 18, chia hết cho 9.*/

#include <stdio.h>

int main()
{
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);
    int temp = n;
    if (n < 0)
    {
        n = -n;
    }
    int sum = 0;
    for (; n > 0; n = n / 10)//n>0 là điều kiện để chạy khi nào không đúng thì ngừng vòng lặp
    {
        sum = sum + (n % 10);
    }
    if (sum % 9 == 0)
    {
        printf("%d là số may mắn", temp);
    }
    else
    {
        printf("%d không là số may mắn", temp);
    }
}
