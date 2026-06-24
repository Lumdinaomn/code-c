/*	Viết chương trình quản lý một danh sách mảng các sinh viên với thông tin: Họ tên, Điểm Lý, Điểm Hóa. Chương trình thực hiện các chức năng sau:
1.	Nhập danh sách sinh viên (2 điểm)
2.	Sắp xếp và in ra danh sách sinh viên theo điểm trung bình giảm dần.
    Danh sách gồm: Họ tên, Điểm trung bình (Điểm trung bình = (Lý + Hóa)/2) (2 điểm)
3.	Tìm kiếm sinh viên có điểm trung bình lớn hơn hoặc bằng một giá trị x nhập từ bàn phím. In ra thông tin sinh viên đó. (1 điểm)
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct sinhvien
// {
//     char ten[100];
//     float hoa;
//     float ly;
//     float dtb;
// } sv;
// void nhap(sv *x)
// {
//     printf("\nNhap ten sinh vien: ");
//     fgets(x->ten, sizeof(x->ten), stdin);
//     x->ten[strcspn(x->ten, "\n")] = '\0';
//     printf("\nNhap diem hoa: ");
//     scanf("%f", &x->hoa);
//     printf("\nNhap diem ly: ");
//     scanf("%f", &x->ly);
//     getchar();
// }
// void dtb(sv *x)
// {
//     x->dtb = (x->hoa + x->ly) / 2;
// }

// void in(sv x)
// {
//     printf("%-10s %-10.2f %-10.2f %-10.2f", x.ten, x.hoa, x.ly, x.dtb);
// }

// void sapxep(sv a[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         int max = i;
//         int j;
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[j].dtb > a[max].dtb)
//             {
//                 max = j;
//             }
//         }
//         sv tmp = a[i];
//         a[i] = a[max];
//         a[max] = tmp;
//     }
// }
// void timkiem(sv a[], int n, float x)
// {
//     int vitri = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i].dtb >= x)
//         {

//             in(a[i]);
//             vitri++;
//         }
//         printf("\n");
//     }
//     if (vitri == 0)
//     {
//         printf("\nKhong co sinh vien vao du dieu kien!");
//     }
// }

// int main()
// {
//     int n;
//     printf("\nNhap so luong sinh vien: ");
//     scanf("%d", &n);
//     getchar();
//     sv a[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nNhap thong tin sinh vien thu: %d", i + 1);
//         nhap(&a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         dtb(&a[i]);
//     }
//     printf("\nDanh sách sinh vien theo dtb giam dan la: ");
//     sapxep(a, n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("\n");
//         in(a[i]);
//     }
//     float x;
//     printf("\nNhap x: ");
//     scanf("%f", &x);
//     timkiem(a, n, x);
//     return 0;
// }

/*9)	Viết chương trình nhập vào một ma trận nguyên kích thước M x N. Chương trình thực hiện các chức năng sau:
1.	Nhập và in ra ma trận (2 điểm)
2.	In ra tổng các phần tử nằm trên đường chéo chính (nếu ma trận vuông) hoặc thông báo nếu không vuông (1 điểm)
3.	Tính tổng các phần tử trên từng cột và in ra danh sách các tổng (1 điểm)
4.	Tìm phần tử nhỏ nhất trong ma trận và vị trí của nó (1 điểm)
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void nhap(int n, int m, int a[n][m])
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
// }
// void tongdcc(int n, int m, int a[n][m])
// {
//     int tong = 0;
//     if (n != m)
//     {
//         printf("\nMa tran khong vuong");
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (i == j)
//             {
//                 tong = tong + a[i][j];
//             }
//         }
//     }
//     printf("\nTong cac ptu duong cheo chinn la: %d\n", tong);
// }
// void tongcot(int n, int m, int a[n][m])
// {
//     int tong[m];

//     // Khởi tạo mảng tổng = 0
//     for (int j = 0; j < m; j++)
//         tong[j] = 0;

//     // Vòng i ngoài, vòng j trong
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             tong[j] = tong[j] + a[i][j];

//     // In kết quả
//     for (int j = 0; j < m; j++)
//         printf("Tong cot %d: %d\n", j, tong[j]);
// }
// void nhonhat(int n, int m, int a[n][m])
// {
//     int min = a[0][0];
//     int vt1 = 0, vt2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] < min)
//             {
//                 min = a[i][j];
//                 vt1 = i;
//                 vt2 = j;
//             }
//         }
//     }
//     printf("\nPhan tu lon nhat trong ma tran la: %d tai vi tri hang %d cot %d", min, vt1, vt2);
// }

// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int a[n][m];
//     nhap(n, m, a);
//     tongdcc(n, m, a);
//     tongcot(n, m, a);
//     nhonhat(n, m, a);
//     return 0;
// }

/*11)	Viết chương trình thao tác với dãy số nguyên A gồm n phần tử. Chương trình thực hiện các chức năng:
1.	Nhập và in ra dãy A (2 điểm)
2.	Sắp xếp dãy theo quy tắc: (2 điểm)
o	Số chẵn tăng dần đứng đầu
o	Số lẻ giảm dần đứng cuối
3.	Nhập vào số nguyên x. Nếu x là chẵn, chèn vào phần chẵn sao cho đúng vị trí tăng dần.
Nếu x là lẻ, chèn vào phần lẻ sao cho đúng vị trí giảm dần. (1 điểm)
*/

// #include <stdio.h>

// void nhap(int n, int a[n])
// {
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
// }
// // Hàm in
// void in(int n, int a[n])
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }
// void sapxep(int n, int a[n])
// {
//     int chan[n], le[n];
//     int sc = 0;
//     int sl = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             chan[sc++] = a[i];
//         }
//         else
//         {
//             le[sl++] = a[i];
//         }
//     }
//     // tăng dần số chẳn
//     for (int i = 0; i < sc - 1; i++)
//     {
//         for (int j = i + 1; j < sc; j++)
//         {
//             if (chan[i] > chan[j])
//             {
//                 int tmp = chan[i];
//                 chan[i] = chan[j];
//                 chan[j] = tmp;
//             }
//         }
//     }

//     // giảm dần số lẻ
//     for (int i = 0; i < sl - 1; i++)
//     {
//         for (int j = i + 1; j < sl; j++)
//         {
//             if (le[i] < le[j])
//             {
//                 int tmp = le[i];
//                 le[i] = le[j];
//                 le[j] = tmp;
//             }
//         }
//     }
//     // ghép lại vào a[]
//     int k = 0;
//     for (int i = 0; i < sc; i++)
//     {
//         a[k++] = chan[i];
//     }
//     for (int i = 0; i < sl; i++)
//     {
//         a[k++] = le[i];
//     }
// }
// // Hàm chèn x vào mảng rồi tự động sắp xếp lại
// void chennhanh(int *n, int a[*n], int x)
// {
//     a[*n] = x;
//     (*n)++;

//     sapxep(*n, a);
// }
// int main()
// {
//     int n, x;
//     int a[100]; // khai báo mảng to hơn n một chút để dư chỗ cho việc làm

//     printf("\nNhap so luong phan tu : ");
//     scanf("%d", &n);
//     printf("\n===Nhap mang===\n");
//     nhap(n, a);
//     printf("\nMANG SAU KHI SAP XEP LA: ");
//     sapxep(n, a);
//     in(n, a);
//     printf("\nNhap so nguyen x can chen: ");
//     scanf("%d", &x);
//     chennhanh(&n, a, x);
//     printf("\nMang sau khi chen la: ");
//     in(n, a);
//     return 0;
// }

/*12)	Viết chương trình thao tác với một danh sách các số nguyên A gồm n phần tử. Chương trình thực hiện:
1.	Nhập vào và in ra mảng A (2 điểm)
2.	Tách mảng thành 2 mảng mới: (2 điểm)
o	Mảng B chứa các số nguyên tố
o	Mảng C chứa các số còn lại
Sau đó in ra cả hai mảng
3.	Tính tổng của từng mảng B và C, in ra mảng có tổng lớn hơn cùng với tổng đó (1 điểm)
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>

// // 1. Hàm nhập
// void nhap(int n, int a[n]) {
//     for (int i = 0; i < n; i++) {
//         printf("Nhap A[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
// }

// // Hàm in dùng chung cho mọi mảng
// void in(int n, int a[n]) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// // Hàm kiểm tra số nguyên tố (Viết rất chuẩn!)
// int sont(int x) {
//     if (x < 2) return 0;
//     for (int i = 2; i <= sqrt(x); i++) {
//         if (x % i == 0) return 0;
//     }
//     return 1;
// }

// // 2 & 3. Hàm tách mảng và tính tổng
// void tachmang(int n, int a[n], int b[n], int c[n]) {
//     int snt = 0; // Số lượng phần tử mảng B
//     int scl = 0; // Số lượng phần tử mảng C

//     // Tách mảng
//     for (int i = 0; i < n; i++) {
//         if (sont(a[i])) {
//             b[snt] = a[i];
//             snt++;
//         } else {
//             c[scl] = a[i];
//             scl++;
//         }
//     }

//     // IN RA 2 MẢNG (Tận dụng ngay hàm in đã viết ở trên)
//     printf("\n--- Mang B (So nguyen to) ---\n");
//     in(snt, b);

//     printf("\n--- Mang C (Cac so con lai) ---\n");
//     in(scl, c);

//     // TÍNH TỔNG
//     int tongsnt = 0;
//     int tongscl = 0;
//     for (int i = 0; i < snt; i++) {
//         tongsnt += b[i];
//     }
//     for (int i = 0; i < scl; i++) {
//         tongscl += c[i];
//     }

//     // SO SÁNH VÀ IN RA KẾT QUẢ
//     printf("\n=> KET QUA SO SANH TONG:\n");
//     if (tongsnt > tongscl) {
//         printf("Mang B co tong lon hon.\n");
//         printf("Mang B: "); in(snt, b);
//         printf("Tong = %d\n", tongsnt);
//     }
//     else if (tongscl > tongsnt) {
//         printf("Mang C co tong lon hon.\n");
//         printf("Mang C: "); in(scl, c);
//         printf("Tong = %d\n", tongscl);
//     }
//     else {
//         // Thêm trường hợp 2 tổng bằng nhau cho chặt chẽ
//         printf("Hai mang co tong bang nhau (Tong = %d)\n", tongsnt);
//     }
// }

// int main() {
//     int n;
//     printf("Nhap so luong phan tu: ");
//     scanf("%d", &n);

//     int a[n], b[n], c[n];

//     printf("\n=== NHAP MANG A ===\n");
//     nhap(n, a);

//     printf("\nMang A vua nhap la: ");
//     in(n, a);

//     tachmang(n, a, b, c);

//     return 0;
// }
