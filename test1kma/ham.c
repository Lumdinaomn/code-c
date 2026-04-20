#include <stdio.h>
#include <math.h>

// Xây dựng một hàm in dòng XIN CHAO ra màn hình
/*void xin_chao(){
    printf("XIN CHAO! \n");
    printf( "Chào con cu mũ \n");
}

int main(){
    xin_chao(); // lời gọi hàm
    xin_chao();

    return 0;
}*/

// Xây dựng hàm tính tổng các số tự nhiên từ 1->n

/*int tong(int n){
    int sum = 0;
    for ( int i = 1 ; i<=n ;i ++) sum+=i;
    return sum;
}
int main (){
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int kq = tong(x);// truyền x vào tong thành n
    printf ("Tổng các chữ số từ 1 đến %d là %d ",x,kq);
    return 0;
}*/

// Xây dựng hàm tìm số lớn hơn giữa 2 số

/*int max(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    printf("%d",max(100,200));
}*/

// Xây dựng một hàm tính tổng các số tự nhiên từ 1->n và các hàm có thể gọi lẫn nhau

/*int tong(int n){
    return n*(n+1)/2;
}
void xinchao(){
    printf("XIN CHAO \n");
    printf("%d",tong(5));
}
int main(){
    xinchao();
    return 0;
}*/

// Xây dựng hàm tính S(n) = 1 + 1/2+...
double S(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }
    return sum;
}

int main()
{
    int n = 10;

    printf("Tổng S(n) = 1 + 1/2 + ... + 1/%d là: %f\n", n, S(n));
    return 0;
}

// KIỂM TRA 1 SỐ CÓ PHẢI LÀ SỐ CHÍNH PHƯƠNG HAY KO NẾU CÓ IN YES NẾU KO IN NO
// Cách 1
/*void chinhphuong(int n){
    int can=sqrt(n);
    if(can*can==n) printf ("YES\n");
    else printf("NO\n");
}
int main(){
    int n=16;
    chinhphuong(n);
}*/

// Cách 2 (NÊN SỬ DỤNG)
//  Sửa kiểu trả về từ void thành int
/*int chinhphuong(int n){
    int can = sqrt(n);
    if(can * can == n) return 1; // Trả về 1 nếu là số chính phương
    else return 0; // Trả về 0 nếu không phải
}

int main(){
    int n=16;
    // Đoạn code này chạy đúng
    if(chinhphuong(n)==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}*/
