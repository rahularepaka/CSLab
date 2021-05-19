#include <stdio.h>

int largercheck(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d", largercheck(a, b));
    //write your code here
}