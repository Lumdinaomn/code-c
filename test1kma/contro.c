// #include <stdio.h>

// void tang1(int a)// tăng không dùng con trỏ
// {
//     a += 100;
// }
// void tang2(int *a)// a là con trỏ trỏ tới int , nó sẽ chứa địa chỉ của biến int
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
//     printf("%p\n", a);
//     *a += 100;
// }

// int main()
// {
//     int a = 300;
//     printf("%p\n", &a);

//     tang2(&a);

//     printf("%d", a);
// }

// int main()
// {
//     int a = 300; // biến tham chiếu trực tiếp đến giá trị 100, còn biến con trỏ gián tiếp có thể tham chiếu đến giá trị đó
//     int *ptr;    // đây là một con trỏ kiểu int:khai báo
//     // KHỞI TẠO GIÁ TRỊ CHO CON TRỎ PTF
//     ptr = &a;
//     printf("Địa chỉ của biến a : %d\n", &a);//& là địa chỉ
//     printf("Giá trị của con trỏ ptr: %d\n ", ptr);//ptr cũng là địa chỉ và đã gán bằng nhau rồi mà
//     //
//     printf("Giá trị của biến a: %d\n", a);                                   // 300
//     printf("Giá trị của biến mã con trỏ ptr đang quản lý là : %d\n ", *ptr); // 300
//     //
//     *ptr = 1000; // a= 1000, thay đổi biến a thàn 1000
//     printf("Giá trị của biến a: %d\n", a);
//     printf("Giá trị của biến mã con trỏ ptr đang quản lý là : %d ", *ptr);

//     return 0;
// }

// HOÁN ĐỔI VỊ TRÍ GIỮA 2 SỐ BẰNG CON TRỎ

// void hoandoi(int *a, int *b)
// {
//     int tmp = *a; // lưu giá trị mà con trỏ a đang trỏ tới
//     *a = *b;      // gán giá trị của biến mà con trỏ b đang trỏ tới cho gt của biến mà con trỏ b đang trỏ tới
//     *b = tmp;
// }
// MỐI QUAN HỆ GIỮA CON TRỎ VÀ MẢNG
// #include <stdio.h>
// #include <windows.h>
// int main()
// {
//     SetConsoleOutputCP(65001);
//     SetConsoleCP(65001);
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("Giá trị của biến a: %d\n", a); // a là hằng của con trỏ
//     printf("Địa chỉ của phần tử a[0]: %d\n", &a);
//     // IN RA CÁC ĐỊA CHỈ TRONG MẢNG, mỗi phần tử cách nhau 4-bit
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Địa chỉ của phần tử a[%d]: %d \n", i, &a[i]);
//     }
//     return 0;
// }

// thay đổi cách nhận và in mảng
//  #include <stdio.h>
//  int main()
//  {
//      int a[5];
//      // for( int i = 0 ; i < 5 ; i++){
//      //     scanf("%d",&a[i]); // một cách để nhập phần tử trong mảng
//      // }
//      for (int i = 0; i < 5; i++)
//      {
//          scanf("%d", a + i); // a+1 là con trỏ trỏ tới chỉ số i
//      }
//      for (int i = 0; i < 5; i++)
//      {
//          printf("%d ", *(a + i));
//      }
//  }

// DỊCH CHUYỂN CON TRỎ VÀ GIÁ TRỊ CỦA CON TRỎ CŨNG THAY ĐỔI

// #include <stdio.h>

// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int *ptr = a; // lúc này giá trị của con trỏ ptr là a[0] = 1;
//     ++ptr;        // a[1] = 2;
//     --ptr;
//     ptr += 3;
// }

// CẤP PHÁT ĐỘNG TRONG C
// malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000]; // này cấp phát tĩnh
    // dataType *pointerName = ( type_cast*) malloc(size_of_byte); // size_of_byte tham số xin cấp phép bao nhiêu byte tùy vào tham số, ép con trỏ void thành con trỏ int hoặc long long

    // CẤP PHÁT 1 TRIỆU PHẦN TỬ INT
    int *ptr = (int *)malloc(1000000000 * sizeof(int)); // 4 triệu byte
    if (ptr == NULL)
    {
        printf("Vuot qua bo nho cap phat!");
    }
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    free(ptr); // giải phóng bộ nhớ sau khi dùng xong
    return 0;
}
