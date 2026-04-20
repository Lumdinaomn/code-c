

/* int n;
 printf ("Nhap so luong phan tu mang: ");
 scanf ("%d", &n);
 int a[n];
 for ( int i = 0 ; i<n ; i++){
     printf ("Nhap phan tu a[%d]: ", i+1);
     scanf ("%d", &a[i]);
 }
 for (int i = 0; i< n ; i++){
     printf ("%d ", a[i]);
 }
 */
// CHƯƠNG TRÌNH IN 0000000
/*  int main(){
  int a[100] = { 1, 2, 3, 4, 5};
  for (int i=0  ; i<100 ; i++){
   printf ("%d ", a[i]);
  }
}*/
/*char c[50];
for ( int i = 0 ; i < 50 ; i++){
scanf ("%c", &c[i]);
printf ("%c", c[i]);
}*/

// chương trình kết hợp hàm với mảng
//     void nhap(int a[], int n){
//         printf ("Nhap cac phan tu cua mang: \n");
//         for ( int i = 0 ; i<n ; i++){
//             scanf("%d", &a[i]);
//         }

//     }
//     int main (){
//         int n, a[1000];
//         scanf("%d", &n);
//         nhap(a,n);
//         for ( int i = 0; i<n; i++){
//          printf("%d", a[i]);
//         }

//       return 0;
// }

/*int main(){
    int n;
    int doi[32];
    int i = 0;
    printf ("Nhập số cơ số 10: ");
    scanf("%d",&n);

    if(n==0){printf("Số nhị phân: 0");
    return 0; }

   while (n>0){
    doi[i] = n%2;
    n = n / 2;
    i++;
   }
   printf("Số nhị phân:");
   for ( int j = i -1 ; j>=n ; j--){
    printf ("%d",doi[j]);
   }
   return 0;
}*/

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     //<kiểu dữ liệu> <tên mảng>[<số lượng phần tử của mảngh>]
//     int numbers[5] = { 1, 2, 3, 4, 5};
//     for (int i = 0 ; i<=5-1;i++){
//         cout << "numbers["<<i<< "] = ";
//         cin>>numbers[i];
//     }
//     for(int i = 0 ; i<=4 ; i++){
//         cout << "numbers[" << i << "] = "<<numbers[i] << endl;
//     }
//     return 0;
// }

// BÀI 1: TẠO MẢNG SỐ NGUYÊN DƯƠNG CÓ N PHẦN TỬ (TỐI ĐA 10 PHẦN TỬ ).NHẬP VÀO 1 SỐ NGUYÊN DƯƠNG X VÀ THÊM X VÀO CUỐI MẢNG VỪA TẠO

// #include <iostream>
// using namespace std;
// int main(){
//     int numbers[20];
//     int n,x;
//     cout<<"n = ";
//     cin>>n;
//     cout<<"Nhập mảng: "<<endl;

//     for (int i = 0 ; i<n;i++){
//        cout << "numbers["<<i<< "] = ";
//       cin>>numbers[i];
//     }
//        cout <<"x = ";
//     cin>> x;
//     numbers[n] = x;
//     n++;
//     for (int i = 0 ; i < n ; i++){
//         cout << numbers[i] << " " ;
//     }
//     }

// BÀI 2 TẠO MẢNG SỐ NGUYÊN DƯƠNG N PHẦN TỬ (TỐI ĐA 10 PHẦN TỬ). NHẬP VÀO 1 SỐ NGUYÊN DƯƠNG X ( 0<=X<=9) VÀ XÓA PHẦN TỬ Ở VỊ TRÍ X
//  #include <iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout << "Nhập n: ";
//      cin>>n;
//      int numbers[20];
//      for ( int i = 0 ; i < n ; i++ ) {
//          cout << "numbers["<<i<< "] = ";
//         cin>>numbers[i];
//      }
//      int x;
//      cout << "Nhập x: ";
//      cin >> x;
//      for ( int i = x ; i < n-1 ; i++){
//          numbers[i] = numbers[i + 1];

//     }
//     n--;
//     cout <<"Mảng sau khi xóa: ";
//     for ( int i = 0 ; i<n ; i++){
//         cout << numbers[i] << " ";
//     }

// }

// BÀI 3: TẠO MẢNG SỐ NGUYÊN DƯƠNG CÓ N PHẦN TỬ (TỐI ĐA 10 PHẦN TỬ  ).NHẬP VÀO 1 SỐ NGUYÊN DƯƠNG X (0<=X<=9) VÀ SỐ SỐ NGUYÊN DƯƠNG Y.THÊM Y VÀO VỊ TRÍ X CỦA MẢNG

// #include <iostream>
// using namespace std;

// int main(){
//     int n,x,y;
//     cout << "Nhập n: ";
//     cin>>n;
//     int numbers[20];
//     for ( int i = 0 ; i < n ; i++ ) {
//         cout << "numbers["<<i<< "] = ";
//        cin>>numbers[i];
//     }
//     cout << "Nhập x: ";
//     cin>>x;
//     cout << " Nhập y: ";
//     cin>>y;
//     for ( int i = n ; i >x; i--){
//         numbers[i] = numbers[i-1];
//     }
//     numbers[x] = y ;
//     n++;
//     cout <<"Mảng sau khi thêm: ";
//     for ( int i = 0 ; i<n ; i++){
//         cout << numbers[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, numbers[10];
//     cin>>n;
//     int sum = 0;
//     for ( int i = 0 ; i < n ; i++){
//         cin>>numbers[i];
//     }
//     for( int i = 0 ; i < n ; i++){
//         cout<<numbers[i]<<" ";
//     }
//     for ( int i = 0 ; i<n ; i++){
//         sum=sum + numbers[i];
//     }
//     cout << sum ;

//     return 0;
// }

/*ÔN TẬP MẢNG 1 CHIỀU*/
/*BÀI 1: Nhập n và mảng a[n]
👉 In ra:

toàn bộ mảng
các số chẵn
các số lẻ */
// #include <iostream>

// int main(){
//     int n;
//     int a[1000];

//     printf("Nhập số lượng phần tử mảng: ");
//     scanf("%d",&n);
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d",&a[i]);
//     }
//     for ( int i = 0 ; i<n; i++){
//         printf("%d \n",a[i]);
//     }
//     printf("Các số chẳn là: ");
//     for ( int i = 0 ; i < n ; i++){
//         if(a[i]%2==0){
//             printf("%d ",a[i]);
//         }
//     }
//     printf("\n");
//     printf("Các số lẻ là: ");
//     for ( int i = 0 ; i < n ; i++){
//         if(a[i]%2!=0){
//             printf("%d ",a[i]);
//         }
//     }
// }
/*Bài 2:

👉 Tìm:

max
min
vị trí của max*/
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main()
// {
//     int n;
//     int a[1000];

//     printf("Nhap so luong phan tu mang: ");
//     scanf("%d", &n);

//     if (n <= 0)
//     {
//         printf("Vui long nhap n > 0!\n");
//         return 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     int tong = 0;
//     for ( int i = 0 ; i < n ; i++){

//     }

//     int minValue = a[0];
//     int maxValue = a[0];
//     int vitri = 1; // tính vị trí theo kiểu 1, 2, 3,...

//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] < minValue)
//         {
//             minValue = a[i];
//         }

//         if (a[i] > maxValue)
//         {
//             maxValue = a[i];
//             vitri = i + 1;
//         }
//     }

//     printf("\nSo nho nhat trong mang la: %d", minValue);
//     printf("\nSo lon nhat trong mang la: %d", maxValue);
//     printf("\nVi tri cua max la: %d\n", vitri);

//     return 0;
// }

/*🎯 Bài 5:

👉 Thêm phần tử x vào cuối mảng*/
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main()
// {
//     int n;
//     int a[1000];

//     printf("Nhap so luong phan tu mang: ");
//     scanf("%d", &n);

//     if (n <= 0 || n >= 1000)
//     {
//         printf("So luong phan tu khong hop le!\n");
//         return 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }

//       int x;
//     printf("Nhap x: ");
//     scanf("%d", &x);

//     a[n] = x;
//     n++;

//     printf("Mang sau khi them x vao cuoi la: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }
/*🎯 Bài 6:

👉 Xóa phần tử tại vị trí x*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int a[1000];

    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000)
    {
        printf("So luong phan tu khong hop le!\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int x;
    printf("Nhập x: ");
    scanf("%d", &x);
    for (int i = x; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("Mảng sau khi xóa là: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
