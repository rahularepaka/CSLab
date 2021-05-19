#include <stdio.h>

void nextcyclic(int* ar,int n)
{
    int checker = 0;
    int temp;

    while (checker < n)
    {
        temp = ar[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            ar[i] = ar[i - 1];
        }
        ar[0] = temp;

        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                printf("%d,", ar[i]);
            }
            else
            {
                printf("%d", ar[i]);
            }
        }

        printf("\n");

        checker++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    nextcyclic(ar,n);

}