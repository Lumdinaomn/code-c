/*Cài đặt danh sách liên kết đơn để quan lý một danh sách sinh viên:
- Nhập xuất danh sách sinh viên
- Tìm sinh viên theo mã số
- Thêm sinh vào sau 1 sinh viên
- Xóa sinh viên khỏi danh sách */
#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *first;
    struct node *last;
}

typedef struct list{
    char ten[99];
    char id[99];
    float diem;
    struct node *next;
}


int main(){



    return 0;
}


