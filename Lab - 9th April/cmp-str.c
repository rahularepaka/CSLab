#include <stdio.h>
#include <string.h>

int valchecker(char *s, int n)
{
    int aci_val = 0;

    for (int i = 0; i < n; i++)
    {
        aci_val += s[i];
    }

    return aci_val;
}

int main()
{
    char s1[10000] = {'\0'};
    char s2[10000] = {'\0'};

    scanf("%[^\n]%s", s1);
    scanf("%[^\n]%s", s2);

    int n1 = strlen(s1);
    int n2 = strlen(s2);

    int a1 = valchecker(s1, n1);
    int a2 = valchecker(s2, n2);

    if (a1 > a2)
    {
        printf("1");
    }
    if (a2 > a1)
    {
        printf("-1");
    }
    if (a2 == a1)
    {
        printf("0");
    }

    return 0;
}