#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    p = &a;
    scanf("%d",&*p);

    printf("%d",*p);
}