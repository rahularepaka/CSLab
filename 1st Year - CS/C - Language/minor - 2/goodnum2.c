#include <stdio.h>

int isGood_number(int num)
{
    int temp = num;
    int flag = 0;
    for (int i = 0; i < 20; i++)
    {
        temp *= 2;

        if (temp >= 100)
        {
            temp -= 100;
        }

        if (temp == num)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        return 1;
    else
        return 0;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int count = 0, sum = 0, i = 10;

    while (count < N)
    {
        if (isGood_number(i))
        {
            count++;
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}