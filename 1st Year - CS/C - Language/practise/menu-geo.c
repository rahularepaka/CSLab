#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int m, n, ip;

    double area_c;
    double area_t;
    double area_r;

    scanf("%d", &ip);
    scanf("%d", &m);


    switch (ip)
    {
    case 1:
        area_c = 3.14 * pow(m,2);
        printf("%f", area_c);
        break;

    case 2:
        area_r = m*m;
        printf("%f",area_r);
        break;

    case 3:
        area_t = 0.5*m*m;
        printf("%f", area_t);
        break;

    case 4:
        break;

    default:
        break;
    }
}