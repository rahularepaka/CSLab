#include <stdio.h>
int main()
{
    int GENDER; //1- Male and 0 -female
    int AGE;

    scanf("%d", &GENDER);
    scanf("%d", &AGE);

    if (GENDER == 1)
    {
        if (AGE <= 15)
        {
            printf("20");
        }
        else
        {
            printf("15");
        }
    }
    else
    {
        if (AGE <= 15)
        {
            printf("30");
        }
        else
        {
            printf("25");
        }
    }
}