#include <stdio.h>
#include <math.h>

int main()
{
    signed long int a[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%li",&a[i][j]);
        }
    }

    float a1 = (a[1][1] * a[2][2]) - (a[1][2] * a[2][1]);
    a1 = a1*a[0][0];

    float a2 = (a[1][0] * a[2][2]) - (a[1][2] * a[2][0]);
    a2 = a2 * a[0][1];

    float a3 = (a[1][0] * a[2][1]) - (a[1][1] * a[2][0]);
    a3 = a3 * a[0][2];

    double sum = a1 - a2 + a3;
    double absum = abs(sum);

    printf("%lf",absum);

}