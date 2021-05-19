#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if (year<1 | year > 9999)
    {
        printf("3");
    }
    else
    {
        if(year%4 == 0 | year%400 == 0)
        {
            printf("1");
        }
        else if(year%100 != 0)
        {
            printf("2");
        }
    }
}
