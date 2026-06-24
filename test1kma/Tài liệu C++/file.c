/*
- Khi một chương trình bị kết thúc toàn bộ dữ liệu sẽ bị mất .Lưu trữ trong một tệp sẽ bảo toàn dữ liệu của bạn ngay cả khi chương trình kết thúc
- Nếu bạn phải nhập một số lượng lớn dữ liệu , bạn sẽ mất rất nhiều thời gian để nhập hết chúng
Tuy nhiên nếu bạn có một tệp chứa tất cả dữ liệu , bạn cso thể dễ dàng truy cập nội dung của tệp bằng một vài lệnh trong C
- Bạn có thể dễ dàng di chuyển dữ liệu của mình từ máy tính này sang máy tính khác mà không có bất kỳ thay đổi nào */

/*Có 2 loại file nên biết
1. Tệp văn bản
2. Tệp nhị phân

Làm việc với tệp
- Khi làm việc với tệp , bạn cần khai báo kiểu con trỏ tệp .Khai báo này là cần thiết để giao tiếp giữa tệp và chương trình

FILE *fptr;           */

/*Mở file: fopen()
FILE *fptr;
fptr = fopen ("fileopen","mode"); tên file, chế độ làm việc

ví dụ:
fopen("newprogram.txt","w"); nếu file chưa có thì dòng này cũng tạo file luôn
fopen("oldprogram.bin","rb");
 r: mở file văn bản chế độ đọc
 w: mở file văn bản ở chế độ ghi
 a: mở file văn bản ở chế độ nối thêm nội dụng vào nội dung sẳn có trong file
 r+: mở file văn bản ở chế độ đọc và ghi
 w+ : mở file văn bản ở chế độ đọc và ghi đồng thời cũng tạo ra file mới
 rb: mở file văn bản ở chế đọc và ghi
 wb: mở file nhị phân ở chế độ đọc
 ab: mởi file nhị phân ở chế độ nối thêm nội dung vào nội dung sẳn có trong file
 rb+: mở file nhị phân ở chế độ đọc và ghi
 wb+: mở file nhị phân ở chế độ đọc và ghi
 ab+: mở file nhị phân ở chế độ đọc và ghi *

 /*Đóng file

 fclose(fptr);*/

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     // 1-tao
//     // 2-mo

//     FILE *f;
//     f = fopen("Baifile.txt", "w"); // mở file để ghi vào
//     if (f == NULL)
//     { // Kiểm tra xem file có tạo mở thành công chưa
//         printf("\n Loi tao hoac mo file");
//         return 0;
//     }
//     // 3-doc or ghi
//     int n;
//     printf("\nNhap vao so n: ");
//     scanf("%d", &n);
//     fprintf(f, "%d", n); // fprintf là hàm để ghi nào
//     // 4-dong file
//     fclose(f);

//     return 0;
// }

/*CÁCH ĐỌC DỮ LIỆU TỪ FILE DẠNG VĂN BẢN*/
/*Ví dụ 1: Ghi 1 số nguyên, 1 số thực và 1 chuỗi ký tự vào file text1.txt*/

// #include <stdio.h>

// int main()
// {
//     FILE *fp;
//     fp = fopen("text.txt", "w"); // w: mở file để ghi , nếu file này chưa tồn tại thì tạo file
//     char S[99] = "XIN CHAO";
//     fprintf(fp, "%5d %5.2f %s", 100, 3.14, S);
//     fclose(fp);

//     return 0;
// }

// Ví dụ 2: Ghi vào file text2.txt các số nguyên tố nhỏ hơn n, mỗi dòng tối đa 10 số

// #include <stdio.h>
// #include <math.h>

// int nt( int a){
//     if ( a < 2) return 0;
//     int i ;
//     for ( i = 2 ; i<=sqrt(a);i++){
//         if(a%i==0) return 0;
//     }
//     return 1;
// }
// void ghivaofile (FILE *fp , int n){
//     fp = fopen("text2.txt","w");
//     if ( fp == NULL) {
//     	printf("Loi mo file that bai");
//     	return;
// 	}
//     int i , dem = 0 ;
//     fprintf(fp,"Cac so nguyen to nho hon %d la: \n",n);
//     for ( i = 2 ; i < n ; i++){
//         if (nt(i) ==1 ){
//             fprintf(fp,"%5d",i);
//             dem ++;
//             if(dem %10 ==0) fprintf(fp,"\n");

//         }
//     }

// }
// fclose(fp);

// int main(){
// FILE *fp;

// int n;
// printf("Nhap n: ");
// scanf("%d",&n);
// ghivaofile(fp,n);
//     return 0;
// }

/*Ví dụ 3 : Ghi vào file text3.txt ma trận A có n hàng và m cột theo yêu cầu sau :
Dòng đầu tiên của file ghi số hàng, số cột
Các dòng tiếp theo ghi phần tử của ma trận*/

// #include <stdio.h>

// int main(){
//     FILE *fp;
// fp = fopen("text3.txt","w");
// fprintf(fp,"Ma tran A\n");
// int n,m,a[99][99];
// printf("Vui long so hang cua mt: "); scanf("%d",n);
// printf("Vui long so cot cua mt : "); scanf("%d",m);
// fprintf(fp,"%5d %5d",n,m);
// int i,j;
// for ( i = 0 ; i < n ; i++){
//     for ( j = 0 ; j< m; j++){
//         scanf("%d",&a[i][j]);
//     }
// }

// for ( i = 0 ; i < n ; i++){
//     for ( j = 0 ; j< m; j++){
//         fprintf(fp,"%5d",a[i][j]);
//     }
// }

//     return 0;
// }

// ĐỂ ĐỌC NỘI DUNG TỪ FILE TA SỬ DỤNG BA HÀM: fscanf() , fgets() , fgetc().
