#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];


    scanf("%s", &c);

    int s = strlen(c);

    int a[s];

    for (int i = 0; i < s; i++)
    {
        a[i] = c[i];
    }

    int product = 1;
    
    for (int i = 0; i < s; i++)
    {
        product *= a[i];
    }


    printf("%d", product);

}