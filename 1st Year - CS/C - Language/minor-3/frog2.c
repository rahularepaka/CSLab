#include <stdio.h>
#include <math.h>
int main()
{
    long c;
    scanf("%ld", &c);
    if (c <= 0) //for no. less or equal to 0
    {
        printf("0");
        return 0;
    }
    long jstep = 1, stepstep = 1; //jump count and step count
    while (stepstep < c)
    {
        double squr = sqrt((double)jstep); //sqrt function from math.h
        if (squr == (long)squr)
            stepstep += squr;
        else
            stepstep++;
        jstep++;
        // printf("%d %d\n",jstep,stepstep);
    }
    printf("%ld", jstep);
}