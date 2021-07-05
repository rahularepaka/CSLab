#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int checker = 0;

    for (int i = 0; i < n; i++)
    {
        checker += a[i];
    }

    //printf("%d",checker);

    long div_check = checker / n;

    if (div_check * n == checker)
        printf("%d", div_check);
    else
        printf("-1");
}