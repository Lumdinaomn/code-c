#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int b[100];
    b[0] = 0;
    b[1] = 1;
    for (int j = 2; j < 100; j++)
    {
        b[j] = b[j - 1] + b[j - 2];
    }

    int count = 0;
    if (n > 1)
    {
        for (int k = 1; k <= n; k++)
        {
            if (n % k == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            int a[100];
            int i = 0;
            while (n != 0)
            {
                a[i] = n % 10;
                n /= 10;
                i++;
            }

            int sum;
            for (int k = 0; k < i; k++)
            {
                a[k] = a[k] + a[k + 1];
                a[k] = sum;
            }
            for (int j = 0; j <= 100; j++)
            {
                if (sum == b[j])
                {
                    printf("la so Fibonacci-Prime");
                }
                else
                {
                    printf("ko phai so Fibonacci-Prime");
                }
            }
        }
        else
        {
            printf("ko phai so Fibonacci-Prime");
        }
    }
    else
    {
        printf("ko phai so Fibonacci-Prime");
    }
    return 0;
}