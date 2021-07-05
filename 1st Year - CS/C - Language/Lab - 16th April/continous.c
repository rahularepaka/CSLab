#include <stdio.h>
#include <math.h>


float conti(int n)
{
    double x = 1;
    for (int i = n; i > 1; i--)
    {
        if (i == n)
        {
            x = 2 + pow((2 * i - 1),2);
        }
        x = pow((2 * (i - 1) - 1),2) / x;
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

    printf("%.10f", 4 / (1 + conti(n)));
}