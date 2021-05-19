#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int user_input[n];

    int temp;

    int modi[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &user_input[i]);
    }

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n - 1; l++)
        {
            if (user_input[l] > user_input[l + 1])
            {
                temp = user_input[l];
                user_input[l] = user_input[l + 1];
                user_input[l + 1] = temp;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += user_input[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (user_input[i] == user_input[i + 1])
        {
            for (int k = i + 1; k < n; k++)
                user_input[k] = user_input[k + 1];

            n--;
        }
    }

    int max = user_input[0];
    int min = user_input[0];

    for (int i = 0; i < n; i++)
    {
        if (max > user_input[i])
        {
            max = user_input[i];
        }
        else if (min < user_input[i])
        {
            min = user_input[i];
        }
    }

    int sum_m = min+max;


    printf("%d", sum - sum_m);
}