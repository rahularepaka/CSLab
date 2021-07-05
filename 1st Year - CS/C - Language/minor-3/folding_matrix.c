#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];
    

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    int b[n][n/2];
    int c[n/2][n/2];


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

        }
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}