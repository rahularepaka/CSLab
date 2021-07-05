#include <stdio.h>
#include <math.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct Time T1;
    struct Time T2;

    scanf("%d", &T1.hours);
    scanf("%d", &T1.minutes);
    scanf("%d", &T1.seconds);

    scanf("%d", &T2.hours);
    scanf("%d", &T2.minutes);
    scanf("%d", &T2.seconds);

    if (T1.hours > T2.hours)
    {
        printf("%d:", T1.hours - T2.hours);
    }
    else
    {
        printf("%d:", T2.hours - T1.hours);
    }

    if (T1.minutes > T2.minutes)
    {
        printf("%d:", T1.minutes - T2.minutes);
    }
    else
    {
        printf("%d:", T2.minutes - T1.minutes);
    }

    if (T1.seconds > T2.seconds)
    {
        printf("%d", T1.seconds - T2.seconds);
    }
    else
    {
        printf("%d", T2.seconds - T1.seconds);
    }
}