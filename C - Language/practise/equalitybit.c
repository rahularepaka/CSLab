#include <stdio.h>

int main()
{
    int n;
    int m;
    scanf("%d", &n);
    scanf("%d", &m);

    int b = n&m;

    if (b == n && b == m)
    {
        printf("Yes");
    }
    else printf("No");
}