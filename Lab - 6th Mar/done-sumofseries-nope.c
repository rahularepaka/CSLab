#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);

    int sum = 0;
    int tot = 0;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        sum += pow(10, i - 1);
        a[i] = sum * i;
    }

    for (int i = 1; i <= n; i++)
    {
        tot += a[i];
    }

    printf("%d", tot);
}