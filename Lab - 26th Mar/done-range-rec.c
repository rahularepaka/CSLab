#include <stdio.h>

int rangerec(int n, int m)
{
    if (n == m+1)
    {
        return n, m;
    }

    printf("%d ", n);

    rangerec(n + 1, m);
}

int main()
{
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    rangerec(n1, n2);
}