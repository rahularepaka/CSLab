#include <stdio.h>

int main()
{
    char a[1000];
    scanf("%s", a);

    int n = strlen(a);

    int sign = 0;

    if (a[0] == '-')
    {
        sign = -1;
    }

    int minus = 0, plus = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] == '-')
        {
            minus++;
            if ((minus % 2 != 0) && (a[i + 1] == '+') && (a[i + 2] == '1'))
            {
                sum += 1;
            }
        }
        else if (a[i] == '+')
        {
            plus++;
            if ((plus % 2 == 0) && (a[i + 1] == '-') && (a[i + 2] == '1'))
            {
                sum += -1;
            }
        }
    }

    printf("%d",sum);
}