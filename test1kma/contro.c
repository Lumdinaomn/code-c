// #include <stdio.h>

// void tang1(int a)
// {
//     a += 100;
// }
// void tang2(int *a) // a là con trỏ trỏ tới int ,nó sẽ chứa địa chỉ của biến int
// {
//     *a += 100;
// }
// int main()
// {
//     int a = 300;
//     tang1(a);
//     printf("Giá trị của biến a sau khi hàm tang1 kết thúc: %d\n", a);
//     tang2(&a); // truyền giá trị của một con trỏ phải có &
//     printf("Giá trị của biến a sau khi hàm tang2 kết thúc: %d", a);
//     return 0;
// }
// #include <stdio.h>

// void tang2(int *a)
// {
//     // printf("%p\n", a);
//     *a += 100;
// }

// int main()
// {
//     int a = 300;
//     // printf("%p\n", &a);

//     tang2(&a);

//     printf("%d", a);
// }

// int main()
// {
//     int a = 300; // biến tham chiếu trực tiếp đến giá trị 100, còn biến con trỏ gián tiếp có thể tham chiếu đến giá trị đó
//     int *ptr;    // đây là một con trỏ kiểu int:khai báo
//     // KHỞI TẠO GIÁ TRỊ CHO CON TRỎ PTR
// GIÁ TRỊ CỦA MỘT CON TRỎ LÀ MỘT ĐỊA CHỈ
//     ptr = &a;//LẤY ĐỊA CHỈ CỦA BIẾN A RÁN CHO PTR
//     printf("Địa chỉ của biến a : %d\n", &a);
//     printf("Giá trị của con trỏ ptr: %d\n ", ptr);
//
//     printf("Giá trị của biến a: %d\n", a);                                   // 300
//     printf("Giá trị của biến mã con trỏ ptr đang quản lý là : %d\n ", *ptr); // 300
//     //
//     *ptr = 1000; // a= 1000, thay đổi biến a thàn 1000
//     printf("Giá trị của biến a: %d\n", a);
//     printf("Giá trị của biến mã con trỏ ptr đang quản lý là : %d ", *ptr);

//     return 0;
// }

// HOÁN ĐỔI VỊ TRÍ GIỮA 2 SỐ BẰNG CON TRỎ
// #include <stdio.h>

// void hoandoi(int *a, int *b)
// {
//     int tmp = *a; // lưu giá trị mà con trỏ a đang trỏ tới
//     *a = *b;      // gán giá trị của biến mà con trỏ b đang trỏ tới cho gt của biến mà con trỏ b đang trỏ tới
//     *b = tmp;
// }

// MỐI QUAN HỆ GIỮA CON TRỎ VÀ MẢNG
// #include <stdio.h>
// int main()
// {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("Giá trị của biến a: %d\n", a); // a là hằng của con trỏ
//     printf("Địa chỉ của phần tử a[0]: %d\n", &a);
//     // IN RA CÁC ĐỊA CHỈ TRONG MẢNG
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Địa chỉ của phần tử a[%d]: %d \n", i, &a[i]);
//     }
//     return 0;
// }
