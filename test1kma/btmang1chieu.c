//Bài 1: Khai báo mảng số nguyên có 10 phần tử. In mảng đó ra màn hình theo hàng ngang.
// #include <stdio.h>

// int main() {
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf ("%d %d %d %d %d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
// }

//Bài 2: In mảng theo chiều đảo ngược
// #include <stdio.h>

// int main() {
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    for (int i = 9 ; i>=0 ; i--){
//        printf ("%d ",a[i]);
//    }
// }


/*Bài 3: Nhập vào một mảng số nguyên. Tìm tổng của tất cả các số trong mảng đó,
tìm tổng các số nguyên dương, tổng của các số nguyên âm. Tìm trung bình cộng
của cả mảng, trung bình cộng của các số nguyên dương, trung bình cộng của các số
nguyên âm*/

// #include <stdio.h>

// int main() {
//     int tong = 0;
//     int tongsnd = 0;
//     int tongsna = 0;
//     float tbcm = 0;
//     float tbcsnd = 0;
//     float tbcsna = 0;
//     int duong = 0;
//     int am = 0;
//     int n;
//     printf ("Nhap so luong phan tu mang:");
//     scanf ("%d",&n);
//     if ( n<=0) {
//     printf ("So luong phan tu khong hop le");
//     return 0;
//     }
//     int a[n];
//     for ( int i = 0 ; i < n ; i++){
//         printf ("Nhap phan tu a[%d] = ", i+1);
//         scanf ("%d",&a[i]);
//         tong = tong + a[i];
//         if ( a[i] > 0){
//             duong++;
//             tongsnd = tongsnd + a[i];
            
//         }
        
//         if ( a[i] < 0){
//             am++;
//             tongsna = tongsna + a[i];
//         }
        
       
//     }   
    
//     tbcm = (float)tong / n;
//     if(duong !=0)
//        tbcsnd = (float)tongsnd / duong;
//        else tbcsnd = 0;

//     if ( am != 0)
          
//     tbcsna = (float)tongsna / am;
//     else tbcsna = 0;
//     printf ("%d ",tong);
//     printf ("%d ",tongsnd);
//     printf ("%d ",tongsna);   
//     printf ("%d ",tbcm); 
//     printf ("%d ",tbcsnd); 
//     printf ("%d ",tbcsna); 

// }
//Bài 4: Tìm phần tử lớn nhất, bé nhất trong mảng kèm vị trí






  
    