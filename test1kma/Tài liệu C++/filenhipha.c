// CÁCH GHI DỮ LIỆU VÀO FILE DẠNG NHỊ PHÂN
/*Để ghi vào tệp nhị phân bạn cần sử dụng fwrite() hàm . Các hàm có bốn đổi số:
1. địa chỉ của dữ liệu được ghi vào đĩa
2. kịch thước của dữ liệu được ghi vào đĩa
3. số loại dữ liệu như vậy
4. con trỏ đến tệp nơi bạn muốn ghi


fwritr(addressData , sizeData, pointerToFile);

ví dụ: fwrite(&num , sizeof(struct threeNum), 1 , fptr)*/
// địa chỉ biến , kích thước kiểu dữ liệu đưa vào , số lượng biến ghi , con trỏ tới file ghi

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct ngaysinh {
//     int ngay;
//     int thang;
//     int nam;
// } n1;

// int main() {

//     FILE *f;

//     // tạo, mở file nhị phân
//     f = fopen("Baitepnhiphan.bin", "wb");

//     if (f == NULL) {
//         printf("\nLoi khong mo duoc file");
//         return 0;
//     }

//     // tạo biến struct
//     n1 a;

//     a.ngay = 1;
//     a.thang = 12;
//     a.nam = 2025;

//     // ghi file nhị phân
//     fwrite(&a, sizeof(n1), 1, f); // hàm ghi vào tệp nhị phân

//     // đóng file
//     fclose(f);

//     return 0;
// }

/* fread( addressData , sizeof(struct threeNum) , 1 , fptr); */ // đọc dữ liệu từ file nhị phân lên

// #include <stdio.h>
// #include <stdlib.h>
//   typedef struct ngaysinh {
//     int ngay;
//     int thang;
//     int nam;
// } n1;

// int main(){

//     FILE *f;
//     //mo file
//     f = fopen("Baidoctepnhiphan.bin","rb"); //rb: đọc từ tệp nhị phân
//     if(f == NULL) {
//         printf("\nLoi mo file");
//         return 0;
//     }
// //doc du lieu
// n1 a;

// fread(&a,sizeof(n1),1,f);
//  printf("\nNgay sinh: %d %d %d",a.ngay ,a.thang ,a.nam);
// fclose(f);
//     return 0;
// }

// GHI VÀ ĐỌC MẢNG SỐ NGUYÊN TỪ FILE TRONG LẬP TRÌNH C ( FILE DẠNG VĂN BẢN)

// Bài 1: đọc dữ liệu từ file text -> lưu dữ liệu vào mảng rồi in ra màn hình
// #include <stdio.h>
// #include <stdlib.h>

// void nhapmang(int x[], int n)
// {
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         printf("\nX[%d] = ", i);
//         scanf("%d", &x[i]);
//     }
// }

// void xuatmang(int x[], int n)
// {
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         printf("\nX[%d] = %d", i, x[i]);
//     }
// }

// void xuatfile(int x[], int n, char tenfile[50])
// {
//     FILE *f;

//     f = fopen(tenfile, "w");

//     if (f == NULL)
//     {
//         printf("\nLoi mo file");
//         return;
//     }

//     fprintf(f, "%d\n", n);

//     int i;

//     for (i = 0; i < n; i++)
//     {
//         fprintf(f, "%d\n", x[i]);
//     }

//     fclose(f);
// }

// void xuatfile2(int x[], int n, char tenfile[50])
// {
//     FILE *f;

//     f = fopen(tenfile, "w");

//     if (f == NULL)
//     {
//         printf("\nLoi mo file");
//         return;
//     }

//     int i;

//     for (i = 0; i < n; i++)
//     {
//         fprintf(f, "%d\n", x[i]);
//     }

//     fclose(f);
// }

// void nhapfile(int x[], int *n, char tenfile[50])
// {
//     FILE *f;

//     f = fopen(tenfile, "r");

//     if (f == NULL)
//     {
//         printf("\nLoi mo file");
//         return;
//     }

//     fscanf(f, "%d", n);

//     printf("\nSo phan tu trong file: %d\n", *n);

//     int i;

//     for (i = 0; i < *n; i++)
//     {
//         fscanf(f, "%d", &x[i]);
//     }

//     fclose(f);
// }

// int main()
// {
//     int a[100];
//     int n;

//     nhapfile(a, &n, "Baixuattiep.txt");

//     xuatmang(a, n);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

// =============================================
// CAU TRUC SAN PHAM
// =============================================
typedef struct
{
    int maSP;
    char tenSP[100];
    float donGia;
    int soLuong;
} SanPham;

// =============================================
// a. GHI DANH SACH SAN PHAM VAO FILE
// =============================================
void ghiFile(SanPham ds[], int n)
{
    FILE *f = fopen("sanpham.dat", "wb"); // wb = write binary

    if (f == NULL)
    {
        printf("Loi: Khong the tao file sanpham.dat!\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fwrite(&ds[i], sizeof(SanPham), 1, f);
    }

    fclose(f);
    printf("\n>> Da ghi %d san pham vao file sanpham.dat\n", n);
}

// =============================================
// b. DOC FILE VA IN DANH SACH
// =============================================
void docVaIn()
{
    FILE *f = fopen("sanpham.dat", "rb"); // rb = read binary

    if (f == NULL)
    {
        printf("Loi: Khong tim thay file sanpham.dat!\n");
        return;
    }

    printf("\n========== DANH SACH SAN PHAM ==========\n");
    printf("%-6s %-20s %-12s %-10s %-15s\n",
           "Ma SP", "Ten SP", "Don gia", "So luong", "Ton kho");
    printf("---------------------------------------------------------------\n");

    SanPham sp;
    while (fread(&sp, sizeof(SanPham), 1, f) == 1)
    {
        float tonKho = sp.donGia * sp.soLuong;
        printf("%-6d %-20s %-12.0f %-10d %-15.0f\n",
               sp.maSP, sp.tenSP, sp.donGia, sp.soLuong, tonKho);
    }

    fclose(f);
}

// =============================================
// c. TINH TONG GIA TRI TON KHO
// =============================================
void tinhTongTonKho()
{
    FILE *f = fopen("sanpham.dat", "rb");

    if (f == NULL)
    {
        printf("Loi: Khong tim thay file sanpham.dat!\n");
        return;
    }

    double tong = 0;
    SanPham sp;
    while (fread(&sp, sizeof(SanPham), 1, f) == 1)
    {
        tong += sp.donGia * sp.soLuong;
    }

    fclose(f);
    printf("\n>> Tong gia tri hang ton kho: %.0f VND\n", tong);
}

// =============================================
// d. TIM SAN PHAM CO GIA TRI TON KHO CAO NHAT
// =============================================
void timMaxTonKho()
{
    FILE *f = fopen("sanpham.dat", "rb");

    if (f == NULL)
    {
        printf("Loi: Khong tim thay file sanpham.dat!\n");
        return;
    }

    SanPham sp, spMax;
    float maxGiaTri = -1;

    while (fread(&sp, sizeof(SanPham), 1, f) == 1)
    {
        float gt = sp.donGia * sp.soLuong;
        if (gt > maxGiaTri)
        {
            maxGiaTri = gt;
            spMax = sp;
        }
    }

    fclose(f);

    printf("\n>> San pham co gia tri ton kho cao nhat:\n");
    printf("   Ma SP    : %d\n", spMax.maSP);
    printf("   Ten SP   : %s\n", spMax.tenSP);
    printf("   Don gia  : %.0f VND\n", spMax.donGia);
    printf("   So luong : %d\n", spMax.soLuong);
    printf("   Gia tri  : %.0f VND\n", maxGiaTri);
}

// =============================================
// MAIN
// =============================================
int main()
{
    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);
    getchar(); // bo ky tu '\n' con trong buffer

    SanPham ds[100];

    for (int i = 0; i < n; i++)
    {
        printf("\n--- San pham thu %d ---\n", i + 1);

        printf("  Ma SP   : ");
        scanf("%d", &ds[i].maSP);
        getchar();

        printf("  Ten SP  : ");
        fgets(ds[i].tenSP, 100, stdin);
        // Xoa ky tu '\n' o cuoi chuoi neu co
        int len = strlen(ds[i].tenSP);
        if (len > 0 && ds[i].tenSP[len - 1] == '\n')
            ds[i].tenSP[len - 1] = '\0';

        printf("  Don gia : ");
        scanf("%f", &ds[i].donGia);

        printf("  So luong: ");
        scanf("%d", &ds[i].soLuong);
        getchar();
    }

    // a. Ghi file
    ghiFile(ds, n);

    // b. Doc va in
    docVaIn();

    // c. Tong ton kho
    tinhTongTonKho();

    // d. San pham max
    timMaxTonKho();

    return 0;
}