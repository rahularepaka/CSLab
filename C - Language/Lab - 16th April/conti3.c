#include <stdio.h>
#include <math.h>

double conticheck(int a, int n)
{
    if (n == 1)
    {
        return pow(a, 2);
    }

    return pow(a, 2) / (2 + conticheck(a + 2, n - 1));
}

double contilarger(int n)
{
    double x = 1;
    for (int i = n; i > 1; i--)
    {
        if (i == n)
        {
            x = 2 + pow((2 * i - 1), 2);
        }
        x = (2 * (i - 1) - 1) * (2 * (i - 1) - 1) / x;
        if (2 * (i - 1) - 1 != 1)
        {
            x += 2;
        }
    }
    return x;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n > 100000)
    {
        printf("%.10lf", 4 / (1 + (contilarger(1, n))));
    }
    else
    {
        printf("%.10lf", 4 / (1 + (conticheck(1, n))));
    }
}