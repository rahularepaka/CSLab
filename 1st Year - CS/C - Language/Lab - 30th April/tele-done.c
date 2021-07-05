#include <stdio.h>
#include <string.h>

void alpha2dig(char c)
{
    if (c == 'A' | c == 'B' | c == 'C')
    {
        printf("2");
    }
    if (c >= 'D' && c <= 'F')
    {
        printf("3");
    }
    if (c >= 'G' && c <= 'I')
    {
        printf("4");
    }
    if (c >= 'J' && c <= 'L')
    {
        printf("5");
    }
    if (c >= 'M' && c <= 'O')
    {
        printf("6");
    }
    if (c >= 'P' && c <= 'S')
    {
        printf("7");
    }
    if (c >= 'T' && c <= 'V')
    {
        printf("8");
    }
    if (c >= 'W' && c <= 'Z')
    {
        printf("9");
    }
}

int main()
{
    char a[20];
    scanf("%s", a);

    int n = strlen(a);

    //printf("%d\n", n);

    int j = 0,k=0;

    //printf("%c",a[n-1]);

    printf("1-800-");

    for (int i = 6; i < n; i++)
    {
        if (j < 3)
        {
            alpha2dig(a[i]);
            j++;
            k++;
        }
        if (j == 3)
        {
            if(k != n-6)
            {
                printf("-");
                j = 0;
            }
        }

        //alpha2dig(a[i]);
    }
}