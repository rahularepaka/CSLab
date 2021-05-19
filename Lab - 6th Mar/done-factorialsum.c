#include <stdio.h>
#include <math.h>

int fact(float n)
{

    int multi = 1;
    float inv;
    float fin;

    float tot = 0;

    float a[1000];

    for (int i = 1; i <= n; i++)
    {
        multi *= i;
        a[i] = multi;
    }

    for (int i = 1; i <= n; i++)
    {
        tot += i / a[i];
    }

    printf("%0.3f", tot);
}

int main()
{
    int n;
    scanf("%d", &n);

    fact(n);
}