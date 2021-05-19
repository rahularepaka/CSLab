#include <stdio.h>

int main()
{
    int n,
    scanf("%d", &n);

    int a[n];
    int b[n];

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 5 != 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
}