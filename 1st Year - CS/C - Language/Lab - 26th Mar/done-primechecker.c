#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int a[5];
    int b[5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int j = 2;
        int flag = 1;

        for (int j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (a[i] != 1)
        {
            if (flag == 1)
            {
                printf("%d ", a[i]);
            }
        }
    }
}