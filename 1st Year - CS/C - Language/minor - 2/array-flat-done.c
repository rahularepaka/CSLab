#include <stdio.h>

int bending(int a[], int n, int op)
{
    int m = n;

    for (int i = 0; i < op; i++)
    {
        for (int i = 0; i < m / 2; i++)
        {
            a[i] = a[i] + a[n - 1];
            n = n - 1;
        }
        m = n;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int op;
    scanf("%d", &op);

    bending(a, n, op);
}