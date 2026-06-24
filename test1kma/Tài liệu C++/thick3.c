/*ĐỀ SỐ 09
Câu 1 (2 điểm)

Viết chương trình nhập vào bán kính r của hình tròn. Tính và in ra chu vi và diện tích của hình tròn đó.

Câu 2 (3 điểm)

Số Automorphic là số mà bình phương của nó kết thúc bằng chính số đó.

Ví dụ:

5^2=25 (kết thúc bằng 5)
25^2=625 (kết thúc bằng 25)

→ 5 và 25 là số Automorphic.

Số N được gọi là số Hyper-Automorphic nếu tổng chữ số của N là số Automorphic.

Ví dụ:

N=14 → tổng chữ số = 1+4=5 (Automorphic)
→ 14 là Hyper-Automorphic.
Yêu cầu:

Viết chương trình nhập vào số nguyên dương N (N > 0), kiểm tra N có là số Hyper-Automorphic hay không.

Câu 3 (5 điểm)

Viết chương trình xử lý file văn bản chứa danh sách sinh viên (mỗi dòng gồm: MSSV HoTen DiemTB). Thực hiện:

a. Đọc toàn bộ dữ liệu từ file sinhvien.txt vào mảng struct.

b. Thêm một sinh viên mới vào file.

c. Tìm và in sinh viên có điểm trung bình cao nhất và thấp nhất.

d. Ghi danh sách sinh viên xếp loại “Xuất sắc” (DiemTB >= 9.0) ra file xuatsac.txt.*/
//========================= GIẢI =======================

/*Câu 1 (2 điểm)

Viết chương trình nhập vào bán kính r của hình tròn. Tính và in ra chu vi và diện tích của hình tròn đó. */
// #define _USE_MATH_DEFINES
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int r;
//     printf("\nNhap ban kinh hinh tron: ");
//     scanf("%d", &r);
//     printf("\nChu vi hinh tron la: %.2lf", 2 * M_PI * r);
//     printf("\nDien tich hinh tron la: %.2lf", M_PI * r * r);
//     return 0;
// }

/*Câu 2 (3 điểm)

Số Automorphic là số mà bình phương của nó kết thúc bằng chính số đó.

Ví dụ:

5^2=25 (kết thúc bằng 5)
25^2=625 (kết thúc bằng 25)

→ 5 và 25 là số Automorphic.

Số N được gọi là số Hyper-Automorphic nếu tổng chữ số của N là số Automorphic.

Ví dụ:

N=14 → tổng chữ số = 1+4=5 (Automorphic)
→ 14 là Hyper-Automorphic.
Yêu cầu:

Viết chương trình nhập vào số nguyên dương N (N > 0), kiểm tra N có là số Hyper-Automorphic hay không.*/

// #include <stdio.h>
// #include <math.h>
// int hyper(int x)
// {
//     int binh = pow(x, 2);
//     int t = x;
//     while (t > 0)
//     {
//         if (binh % 10 != t % 10)
//         {
//             return 0;
//         }
//         binh = binh / 10;
//         t = t / 10;
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     printf("\nNhap n: ");
//     scanf("%d", &n);
//     while (n < 0)
//     {
//         printf("\nNhap n: ");
//         scanf("%d", &n);
//     }
//     int tong = 0;
//     int t = n;
//     while (t > 0)
//     {
//         tong = tong + t % 10;
//         t = t / 10;
//     }
//     if (hyper(tong))
//     {
//         printf("\n%d la Hyper-Automorphic", n);
//     }
//     else
//     {
//         printf("\n%d ko la Hyper-Automorphic", n);
//     }

//     return 0;
// }
// CÁCH 2
#include <stdio.h>
#include <math.h>
int hyper(int x)
{
    int k = x;
    int dem = 0;
    int binh = x * x;
    while (k > 0)
    {
        dem++;
        k = k / 10;
    }
    int so = 1;
    for (int i = 1; i <= dem; i++)
    {
        so = so * 10;
    }
    int socuoi = binh % so;
    if (socuoi == x)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
    }
    int tong = 0;
    int t = n;
    while (t > 0)
    {
        tong = tong + t % 10;
        t = t / 10;
    }
    if (hyper(tong))
    {
        printf("\n%d la Hyper-Automorphic", n);
    }
    else
    {
        printf("\n%d ko la Hyper-Automorphic", n);
    }

    return 0;
}

/*Câu 3 (5 điểm)

Viết chương trình xử lý file văn bản chứa danh sách sinh viên (mỗi dòng gồm: MSSV HoTen DiemTB). Thực hiện:

a. Đọc toàn bộ dữ liệu từ file sinhvien.txt vào mảng struct.

b. Thêm một sinh viên mới vào file.

c. Tìm và in sinh viên có điểm trung bình cao nhất và thấp nhất.

d. Ghi danh sách sinh viên xếp loại “Xuất sắc” (DiemTB >= 9.0) ra file xuatsac.txt.*/
