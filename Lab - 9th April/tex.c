#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10000];
    char s2[10000];

    gets(s1);
    gets(s2);

    int n1 = strlen(s1);

    printf("%d\n", n1);

    return 0;
}