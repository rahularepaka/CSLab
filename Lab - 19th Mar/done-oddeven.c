#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int b[n];
    int c[n];

    int j=0;
    int k=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < j; i++) {
       printf("%d ",b[i]);
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}