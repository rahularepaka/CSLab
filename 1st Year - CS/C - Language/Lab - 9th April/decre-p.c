#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++) {
       scanf("%d",&a[i]);
    }

    int loc;
    scanf("%d",&loc);

    int *p;
    p = &a[n];

    for (int i = loc; i>=0; i--) 
    {
       p--;
    }

    printf("%d",*p);
}