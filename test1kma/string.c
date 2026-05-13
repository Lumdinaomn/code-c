// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Nhập n: ");
//     scanf("%d", &n);
//     getchar(); // ăn enter khi nhập n
//     char str[100];
//     fgets(str, sizeof(str), stdin); // nhập chuỗi ko bị dừng bởi enter
//     // scanf("%s", &str);

//     printf("%s", str);
//     // // printf("%c", str[1]);//lấy 1 kí tự từ chuỗi
//     // str[1] = 'E'; // thay đổi kí tự thứ 2 thành kí tự 'E'
//     // printf("%s", str);

//     return 0;
// }

// CÁC PHƯƠNG THỨC LÀM VIỆC VỚI STRING
/*
str.substr(x,y)

*/

#include <stdio.h>

int main()
{
    int a, b, c;
    char Hovaten[100];
    printf("vui long nhap ngay: ");
    scanf("%d", &a);
    printf("vui long nhap thang: ");
    scanf("%d", &b);
    printf("vui long nhap nam: ");
    scanf("%d", &c);
    printf("Ho va ten:");

    getchar(); // ăn enter khi nhập n
    fgets(Hovaten, sizeof(Hovaten), stdin);
    printf("Ho va ten:%s Ngay thang nam sinh: %d/%d/%d", Hovaten, a, b, c);
    return 0;
}