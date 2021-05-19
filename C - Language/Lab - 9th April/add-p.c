#include <stdio.h>

int main()
{
    int *a;
    int *b;

    int c;
    int d;


    scanf("%d",&c);
    scanf("%d",&d);

    a = &c;
    b = &d;

    int sum = *a+*b;

    printf("%d",sum);
}