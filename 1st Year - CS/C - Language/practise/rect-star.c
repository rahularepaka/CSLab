#include <stdio.h>

int main()
{
    int r;
    int c;
    scanf("%d", &r);
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == c-1)
            {
                printf("*");
            }
            else
            {
                printf("* ");
            }
        }

        printf("\n");
    }
}