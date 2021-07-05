#include <stdio.h>

#define MAXCN 10

int main(void)
{
    FILE *grades = fopen("dataSmallBase.txt", "r"); 
    char className[MAXCN] = {0};
    int currChar = 0;
    int i = 0;


    /* read from grades until 1st space */
    while (i + 1 < MAXCN && ((currChar = fgetc(grades)) != ' '))
    {
        className[i++] = currChar;
    }
    className[i] = 0;

    printf("%s", className);

    return 0;
}