#include <stdio.h>

void chuyenCoSo(int n, int coso)
{
    char a[100];
    int i = 0;

    while (n > 0)
    {
        int du = n % coso;

        if (du < 10)
        {
            a[i] = du + '0';
        }
        else
        {
            a[i] = du - 10 + 'A';
        }

        i++;

        n = n / coso;
    }

    // in ngược
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", a[j]);
    }
}

int main()
{
    int n;

    printf("Nhap so he 10: ");
    scanf("%d", &n);

    printf("\nHe 2: ");
    chuyenCoSo(n, 2);

    printf("\nHe 8: ");
    chuyenCoSo(n, 8);

    printf("\nHe 16: ");
    chuyenCoSo(n, 16);

    return 0;
}