#include <stdio.h>
int main()
{
    int N1, N2;
    scanf("%d", &N1);
    scanf("%d", &N2);

    if (N1 == 5 && N2 == 2)
    {
        printf("0");
    }
    else if (N1 == 5 && N2 != 2)
    {
        printf("1");
    }
    else if (N1 != 5 && N2 == 2)
    {
        printf("2");
    }
    else
    {
        printf("3");
    }
}