/*#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    int tong = a + b;
    printf ("tong al: %d" , tong );
    return 0;5
}*/
#include <stdio.h>

int main()
{
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("A lon hon b");
    }
    else
    {
        printf("A be hon b");
    }
}
