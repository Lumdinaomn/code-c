// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// typedef struct sinhvien
// {
//     char ten[100];
//     float toan;
//     float anh;
// } sv;

// void nhap(sv *x)
// {

//     printf("\nNhap ten sinh vien : ");
//     fgets(x->ten, sizeof(x->ten), stdin);
//     x->ten[strcspn(x->ten, "\n")] = '\0';
//     printf("\nNhap diem toan: ");
//     scanf("%f", &x->toan);
//     printf("\nNhap diem anh: ");
//     scanf("%f", &x->anh);
//     getchar();
// }
// void in(sv x)
// {
//     printf("\n%s %.2f %.2f", x.ten, x.toan, x.anh);
// }

// void timkiem(sv a[], int n)
// {
//     // Kiểm tra an toàn: Nếu mảng không có sinh viên nào thì thoát hàm
//     if (n <= 0)
//         return;

//     // Đặt tên biến chuẩn xác để tránh nhầm lẫn
//     float max_toan = a[0].toan;
//     float min_anh = a[0].anh;

//     int vitri1 = 0; // Vị trí sinh viên có điểm Toán cao nhất
//     int vitri2 = 0; // Vị trí sinh viên có điểm Anh thấp nhất

//     // Vòng lặp có thể bắt đầu từ i = 1 vì a[0] đã được dùng làm mốc
//     for (int i = 1; i < n; i++)
//     {
//         // TÌM MAX TOÁN
//         if (a[i].toan > max_toan)
//         {
//             max_toan = a[i].toan; // Cập nhật đúng biến max_toan
//             vitri1 = i;
//         }

//         // TÌM MIN ANH
//         if (a[i].anh < min_anh)
//         {
//             min_anh = a[i].anh; // Cập nhật đúng biến min_anh
//             vitri2 = i;
//         }
//     }

//     // Đã thêm dấu chấm phẩy (;) ở cuối lệnh printf
//     printf("\nSinh vien co diem toan cao nhat la: ");
//     in(a[vitri1]);

//     printf("\nSinh vien co diem anh thap nhat la: ");
//     in(a[vitri2]);
// }

// int main()
// {
//     int n;
//     printf("\nNhap so luong sinh vien : ");
//     scanf("%d", &n);
//     getchar();
//     sv a[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nNhap thong tin sinh vien thu %d: ", i + 1);
//         nhap(&a[i]);
//     }
//     printf("\n============================DANH SACH SINH VIEN LA=======================");
//     for (int i = 0; i < n; i++)
//     {
//         in(a[i]);
//     }

//     timkiem(a, n);
//     return 0;
// }

// Bài 3
#include <stdio.h>
#include <string.h>

// Định nghĩa cấu trúc Sản Phẩm
typedef struct
{
    char TenSanPham[100];
    float GiaTien;
} SanPham;

// HÀM NHẬP CHO 1 SẢN PHẨM (Viết theo đúng chuẩn con trỏ bạn muốn)
void nhap(SanPham *x)
{
    printf("Nhap ten san pham: ");
    fgets(x->TenSanPham, sizeof(x->TenSanPham), stdin);
    x->TenSanPham[strcspn(x->TenSanPham, "\n")] = '\0'; // Xóa dấu enter

    printf("Nhap gia tien: ");
    scanf("%f", &x->GiaTien);

    getchar(); // Xóa bộ đệm sau khi nhập số để vòng lặp sau không bị lỗi
}

// HÀM IN CHO 1 SẢN PHẨM
void in(SanPham x)
{
    printf("%-25s | %-15.2f\n", x.TenSanPham, x.GiaTien);
}

// Hàm tính tổng tiền (vẫn thao tác với mảng)
void tinhTongTien(SanPham sp[], int n)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += sp[i].GiaTien;
    }
    printf("\n=> TONG TIEN CUA TAT CA SAN PHAM LA: %.2f\n", tong);
}

// Hàm sắp xếp danh sách sản phẩm TĂNG DẦN (vẫn thao tác với mảng)
void sapXepTangDan(SanPham sp[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (sp[j].GiaTien < sp[min_idx].GiaTien)
            {
                min_idx = j;
            }
        }
        SanPham tmp = sp[i];
        sp[i] = sp[min_idx];
        sp[min_idx] = tmp;
    }
}

int main()
{
    int n;

    // Ép nhập ít nhất 3 sản phẩm
    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d", n);
    while (n < 3)
    {
        printf("\nVui long nhap lai so luong san pham lon hon 2!");
        printf("Nhap so luong san pham: ");
        scanf("%d", n);
    }

    getchar(); // Xóa phím Enter sau khi nhập n

    SanPham sp[n];

    // YÊU CẦU 1: VÒNG LẶP NHẬP (Truyền địa chỉ từng phần tử vào hàm)
    printf("\n=== NHAP THONG TIN SAN PHAM ===");
    for (int i = 0; i < n; i++)
    {
        printf("\n- Nhap san pham thu %d:\n", i + 1);
        nhap(&sp[i]); // <--- TRUYỀN ĐỊA CHỈ TẠI ĐÂY
    }

    // YÊU CẦU 2: TÍNH TỔNG TIỀN
    tinhTongTien(sp, n);
    // printf("\n=> TONG TIEN CUA TAT CA SAN PHAM LA: %.2f\n", tongTien);

    // YÊU CẦU 3: SẮP XẾP VÀ IN DANH SÁCH
    sapXepTangDan(sp, n);

    printf("\n=== DANH SACH SAN PHAM SAU KHI SAP XEP GIA TANG DAN ===\n");
    printf("%-25s | %-15s\n", "Ten San Pham", "Gia Tien");
    printf("------------------------------------------\n");

    // VÒNG LẶP IN DANH SÁCH
    for (int i = 0; i < n; i++)
    {
        in(sp[i]);
    }

    return 0;
}
