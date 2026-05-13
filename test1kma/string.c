#include <stdio.h>

int main()
{
    char hoten[30];
    printf("nhập họ tên: ");

    fgest(hoten);
    scanf("%s ", &hoten);

    // int n;
    // printf("Nhập n: ");
    // scanf("%d", &n);
    // getchar(); // ăn enter khi nhập n
    // char str[100];
    // fgets(str, sizeof(str), stdin); // nhập chuỗi ko bị dừng bởi enter
    // // scanf("%s", &str);

    // printf("%s", str);
    // // printf("%c", str[1]);//lấy 1 kí tự từ chuỗi
    // str[1] = 'E'; // thay đổi kí tự thứ 2 thành kí tự 'E'
    // printf("%s", str);

    // return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char hoten[50];

    fgets(hoten, sizeof(hoten), stdin);
    hoten[strcspn(hoten, "\n")] = '\0';

    printf("%s", hoten);

    return 0;
}

// CÁC PHƯƠNG THỨC LÀM VIỆC VỚI STRING
/*
str.substr(x,y)

*/