/*Bài 15. Nhập vào n số nguyên dương không âm, tìm và in ra ước chung lớn nhất
của tất cả các phần tử trong mảng.
Input:
Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
Dòng thứ hai là n số trong dãy
Output
Ước chung lớn nhất của tất cả các phần tử trong mảng.
*/
#include <stdio.h>

int main(){
    int n;
    printf ("Nhap so luong phan tu mang: ");
    scanf ("%d", &n);
    if ( n<=0) {
     printf ("So luong phan tu khong hop le");
     return 0;
     }
    int a[n];
 
    for ( int i = 0 ; i<n ; i++){
        printf ("Nhap phan tu a[%d]: ", i+1);
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i< n ; i++){
        printf ("%d ", a[i]);
    }
    printf ("Mang vua nhap la: ");
    for ( int i = 0 ; i< n ; i++){
        
        printf ("%d ", a[i]);
    }
    //tim so nho nhat trong man do 
    int min = a[0];
    for ( int i = 1; i<n; i++){
        if(a[i] < min){
        min = a[i];
    }
}
  // tim uoc chung lơn nhat
    int ucln = 1;
    for ( int i = min ; i>=1 ; i--){
        int check = 1;
        for ( int j = 0 ; j< n; j++){
            if(a[i] % i !=0){
                check = 0;
                break;
            }
        }
        if ( check =1 ){
            ucln = i;
            break;
        }
    }
    printf ("uoc chung lon nhat cua day so la: %d",ucln);

}













