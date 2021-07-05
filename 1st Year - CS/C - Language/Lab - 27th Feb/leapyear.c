//Leap Year is divisble by 4 exactly and exactly divisble by 400 and shld not be divisble by 100

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
        if((year%4 == 0 && year%100 !=0) | (year%400 ==0))
        {   
            printf("1");
        }
        else
        {
            printf("2");
        }    
    }
}   
