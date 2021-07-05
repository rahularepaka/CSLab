#include <stdio.h>
#include <math.h>

int decToBinary(int n)
{
    int a[10000];
    int i;

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}

int main()
{
    int user_num;
    scanf("%d", &user_num);

    if ((user_num < 0) | (user_num > 524287))
    {
        printf("-1");
    }
    else
    {
        decToBinary(user_num);
    }
}