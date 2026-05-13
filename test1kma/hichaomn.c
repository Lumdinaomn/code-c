#include <stdio.h>

int main()
{
    int n, m;
    printf("Nhập n: ");
    scanf("%d", &n);
    printf("Nhập m: ");
    scanf("%d", &m);
    for (int i = 1; i <= n * m; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            printf("Bội chung nhỏ nhất của n và m là: %d\n", i);
            break;
        }s
    }
    for (int i = n * m; i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            printf("Ước chung lớn nhất của n và m là: %d", i);
            break;
        }
    }
}
