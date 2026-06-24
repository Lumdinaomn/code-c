#include <stdio.h>
#include <stdlib.h>

void ucln(int n, int m)
{

    int min;
    int ucln;
    int bcnn;
    if (n < m)
    {
        min = n;
    }
    else
    {
        min = m;
    }
    for (int i = min; i >= 0; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            ucln = i;
            break;
        }
    }
    for (int i = 1; i <= n * m; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            bcnn = i;
            break;
        }
    }
    printf("UCLN la: %d", ucln);
    printf("\nBCNN la: %d", bcnn);
}
int main()
{
    int n, m;
    printf("Nhap 2 so m va n: ");
    scanf("%d %d", &n, &m);
    ucln(n, m);
    return 0;
}
