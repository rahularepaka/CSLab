#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}