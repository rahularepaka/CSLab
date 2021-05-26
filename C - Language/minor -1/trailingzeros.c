#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int size = n;

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        n = a[i];

        while (n > 5)
        {
            n = n / 5;
            sum += n;
        }

        b[i] = sum;
    }

    int product = 1;

    for (int i = 0; i <= n; i++)
    {
        product = product * b[i];
    }

    printf("%d ", product);
}