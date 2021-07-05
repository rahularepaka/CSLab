#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int eval(char a[],int n)
{
    int sum = 0;

    if(a[0] == '-')
    {
        for (int i = 1; i < n; i++)
        {
            sum = sum * 10 + (a[i] - 48);
        }
        sum = sum * -1;
        return sum;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum * 10 + (a[i] - 48);
        }
        return sum;
    }
    
    
}

int main()
{
    char a[20];
    scanf("%s", a);

    int n = strlen(a);

    int s = eval(a,n);

    printf("%d",s);
}