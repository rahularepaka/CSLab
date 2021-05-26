#include <stdio.h>

int checker(int num)
{
    //int a[6];

    int check = num;
    int k;

    for (int i = ; i < 20; i++)
    {
        if (check * 2 > 100)
        {
            //a[i] = 2 * check;
            //check = a[i];
            check -= 100;
        }
        /*
        else
        {
            a[i] = (2 * check) - 100;
            check = a[i];
        }
        */
        if (check == num)
        {
            k = 1;
            break;
        }
    }

    /*
    if (a[4] == num)
    {
        return 1;
    }
    if (a[4] != num)
    {
        return 0;
    }
    */

    if (k == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    int sum = 0;
    int flager = 0;
    int i = 10;

    while (flager < num)
    {
        if (checker(i))
        {
            flager++;
            sum += i;
        }

        i++;
    }

    printf("%d", sum);

    //printf("%d",checker(num));
}