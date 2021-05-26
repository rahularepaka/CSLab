#include <stdio.h>
#include <string.h>

void checker(char a[1000],int n)
{
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c", a[i]);
            if (count != 1)
            {
                printf("%d", count);
            }
            count = 1;
        }
    }
}

int main()
{
    char a[1000];
    scanf("%s", &a);

    int n = strlen(a);

    checker(a,n);


}