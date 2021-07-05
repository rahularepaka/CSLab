#include <stdio.h>


int swapelem(int a,int b)
{
    int *p1;
    int *p2;

    p1 = &a;
    p2 = &b;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("%d %d", a,b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);

    swapelem(a,b);
}