#include <stdio.h>

int main()
{
    int number,var;

    scanf("%d", &number);

    if ((number & 1 )==0) printf("Even");
    else printf("Odd");

}