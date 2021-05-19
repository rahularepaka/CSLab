#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n];
    int c[n];

    int k = 0;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {

        if (a[i]  == 0)
        {
            b[k] = a[i];
            k++;
        }
        else
        {
            c[j] = a[i];
            j++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }

    for (int i = 0; i < j; i++)
    {
        printf("%d ", c[i]);
    }
}