#include <stdio.h>
#include <math.h>


double calc(int f_b, unsigned expansions)
{
    double a, b, r;
    a = b = r = 0.0;

    unsigned i;
    for (i = expansions; i > 0; i--)
    {
        a = 2;
        b = f_b(i);
        r = b / (a + r);
    }
    a = f_a(0);

    return a + r;
}

double pi_b(unsigned n)
{
    double c = 2.0 * n - 1.0;

    return c * c;
}

int main()
{

    double pi = calc(pi_b, 1);

    printf("%.10lf", (4 / (1+pi)));
}