#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k_val;
    scanf("%d", &k_val);

    int k_ind;
    scanf("%d", &k_ind);

    for (int i = n; i >= k_ind; i--)
    {
        a[i] = a[i - 1];
    }

    a[k_ind] = k_val;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}