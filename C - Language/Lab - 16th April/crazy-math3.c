#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    scanf("%s", a);

    int n = strlen(a);

    int sign = 1;

    int sum = 0;
    int min, plus = 0;

    for (int i = 0; i < n; i++)
    {
        if ((int)a[i] == 49)
        {
            sum += 1;
        }
        if ((int)a[i] == 45)
        {
            min++;
        }
        if ((int)a[i] == 43)
        {
            plus++;
        }
    }

    if(min%2 == 0)
    {
        sum += 1;
    }
    else if(min%2 != 0)
    {
        sum -= 1;
    }

    printf("%d", sum);
}