#include <stdio.h>

int main()
{
    int n,m;

    scanf("%d", &n);
    scanf("%d", &m);

    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum1dia = 0;
    int sum2dia = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i==j)
            {
                sum1dia +=a[i][j];
            }
            if((i+j)==(n-1))
            {
                sum2dia += a[i][j];
            }
        }
    }

    if(sum2dia > sum2dia)
    {
        printf("%d", sum2dia - sum1dia);
    }
    else
    {
        printf("%d", sum1dia - sum2dia);
    }
}