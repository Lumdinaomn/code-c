/*
- Khi m?t chuong trình b? k?t thúc toàn b? d? li?u s? b? m?t .Luu tr? trong m?t t?p s? b?o toàn d? li?u c?a b?n ngay c? khi chuong trình k?t thúc
- N?u b?n ph?i nh?p m?t s? lu?ng l?n d? li?u , b?n s? m?t r?t nhi?u th?i gian d? nh?p h?t chúng
Tuy nhiên n?u b?n có m?t t?p ch?a t?t c? d? li?u , b?n cso th? d? dàng truy c?p n?i dung c?a t?p b?ng m?t vài l?nh trong C
- B?n có th? d? dàng di chuy?n d? li?u c?a mình t? máy tính này sang máy tính khác mà không có b?t k? thay d?i nào */

/*Có 2 lo?i file nên bi?t
1. T?p van b?n
2. T?p nh? phân

Làm vi?c v?i t?p
- Khi làm vi?c v?i t?p , b?n c?n khai báo ki?u con tr? t?p .Khai báo này là c?n thi?t d? giao ti?p gi?a t?p và chuong trình

FILE *fptr;           */

/*M? file: fopen()
FILE *fptr;
fptr = fopen ("fileopen","mode"); tên file, ch? d? làm vi?c

ví d?:
fopen("newprogram.txt","w"); n?u file chua có thì dòng này cung t?o file luôn
fopen("oldprogram.bin","rb");
 r: m? file van b?n ch? d? d?c
 w: m? file van b?n ? ch? d? ghi
 a: m? file van b?n ? ch? d? n?i thêm n?i d?ng vào n?i dung s?n có trong file
 r+: m? file van b?n ? ch? d? d?c và ghi
 w+ : m? file van b?n ? ch? d? d?c và ghi d?ng th?i cung t?o ra file m?i
 rb: m? file van b?n ? ch? d?c và ghi
 wb: m? file nh? phân ? ch? d? d?c
 ab: m?i file nh? phân ? ch? d? n?i thêm n?i dung vào n?i dung s?n có trong file
 rb+: m? file nh? phân ? ch? d? d?c và ghi
 wb+: m? file nh? phân ? ch? d? d?c và ghi
 ab+: m? file nh? phân ? ch? d? d?c và ghi *

 /*Ðóng file

 fclose(fptr);*/

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    // 1-tao
//    // 2-mo
//
//    FILE *f;
//    f = fopen("Baifile.txt", "w"); // m? file d? ghi vào
//    if (f == NULL)
//    { // Ki?m tra xem file có t?o m? thành công chua
//        printf("\n Loi tao hoac mo file");
//        return 0;
//    }
//    // 3-doc or ghi
//    int n;
//    printf("\nNhap vao so n: ");
//    scanf("%d", &n);
//    fprintf(f, "%d", n); // fprintf là hàm d? ghi nào
//    // 4-dong file
//    fclose(f);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//int main(){
//    FILE *f;
//    //1,2 tao va mo file
//    f = fopen ("Baifile.txt","r");
//    if(f == NULL){
//    	printf("\n Loi tao hoac mo file");
//    	return 0;
//	}
//    //3 doc or ghi du lieu
//    int n;
//    fscanf(f,"%d",&n);
//    printf("nGia tri cua n: %d",n);
//    fclose(f);
//    //4 dong file
//    
//}

//CÁCH GHI D? LI?U VÀO FILE D?NG NH? PHÂN
 /*Ð? ghi vào t?p nh? phân b?n c?n s? d?ng fwrite() hàm . Các hàm có b?n d?i s?:
1. d?a ch? c?a d? li?u du?c ghi vào dia
2. k?ch thu?c c?a d? li?u du?c ghi vào dia
3. s? lo?i d? li?u nhu v?y
4. con tr? d?n t?p noi b?n mu?n ghi 


fwritr(addressData , sizeData, pointerToFile); 

ví d?: fwrite(&num , sizeof(struct threeNum), 1 , fptr)*/ //d?a ch? bi?n , kích thu?c ki?u d? li?u dua vào , s? lu?ng bi?n ghi , con tr? t?i file ghi
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct ngaysinh {
//    int ngay;
//    int thang;
//    int nam;
//} n1;
//
//int main() {
//
//    FILE *f;
//
//    // t?o, m? file nh? phân
//    f = fopen("Baitepnhiphan.bin", "wb");
//
//    if (f == NULL) {
//        printf("\nLoi khong mo duoc file");
//        return 0;
//    }
//
//    // t?o bi?n struct
//    n1 a;
//
//    a.ngay = 1;
//    a.thang = 12;
//    a.nam = 2025;
//
//    // ghi file nh? phân
//    fwrite(&a, sizeof(n1), 1, f);
//
//    // dóng file
//    fclose(f);
//
//    return 0;
//}


/* fread( addressData , sizeof(struct threeNum) , 1 , fptr); */ // d?c d? li?u t? file nh? phân lên 

//#include <stdio.h>
//#include <stdlib.h>
//  typedef struct ngaysinh {
//    int ngay;
//    int thang;
//    int nam;
//} n1;
//
//
//int main(){
//
//    FILE *f;
//    //mo file
//    f = fopen("Baitepnhiphan.bin","rb"); //rb: d?c t? t?p nh? phân
//    if(f == NULL) {
//        printf("\nLoi mo file");
//        return 0;
//    }
////doc du lieu
//n1 a;
//
//fread(&a,sizeof(n1),1,f);
// printf("\nNgay sinh: %d/%d/%d",a.ngay ,a.thang ,a.nam);
//fclose(f);
//    return 0;
//}

//GHI VÀ Ð?C M?NG S? NGUYÊN T? FILE TRONG L?P TRÌNH C ( FILE D?NG VAN B?N)

#include <stdio.h>
#include <stdlib.h>

void nhapmang(int x[], int n)
{
    int i;

    for(i = 0 ; i < n ; i++)
    {
        printf("\nX[%d] = ", i);
        scanf("%d", &x[i]);
    }
}

void xuatmang(int x[], int n)
{
    int i;

    for(i = 0 ; i < n ; i++)
    {
        printf("\nX[%d] = %d", i, x[i]);
    }
}

void xuatfile(int x[], int n, char tenfile[50])
{
    FILE *f;

    f = fopen(tenfile, "w");

    if(f == NULL)
    {
        printf("\nLoi mo file");
        return;
    }

    fprintf(f, "%d\n", n);

    int i;

    for(i = 0 ; i < n ; i++)
    {
        fprintf(f, "%d\n", x[i]);
    }

    fclose(f);
}

void xuatfile2(int x[], int n, char tenfile[50])
{
    FILE *f;

    f = fopen(tenfile, "w");

    if(f == NULL)
    {
        printf("\nLoi mo file");
        return;
    }

    int i;

    for(i = 0 ; i < n ; i++)
    {
        fprintf(f, "%d\n", x[i]);
    }

    fclose(f);
}

void nhapfile(int x[], int *n, char tenfile[50])
{
    FILE *f;

    f = fopen(tenfile, "r");

    if(f == NULL)
    {
        printf("\nLoi mo file");
        return;
    }

    fscanf(f, "%d", n);

    printf("\nSo phan tu trong file: %d\n", *n);

    int i;

    for(i = 0 ; i < *n ; i++)
    {
        fscanf(f, "%d", &x[i]);
    }

    fclose(f);
}

int main()
{
    int a[100];
    int n;

    nhapfile(a, &n, "Baixuattiep.txt");

    xuatmang(a, n);

    return 0;
}
