#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    
    for (int k = 0; k < n; k++)
    {
        int temp;
        for (int l = 0; l < n - 1; l++)
        {
            if (a[l] > a[l + 1])
            {
                temp = a[l];
                a[l] = a[l + 1];
                a[l + 1] = temp;
            }
        }
    }

    printf("%d", a[n-1] - a[0]);

}