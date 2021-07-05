#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int c = 0;
    char ch[10000];

    scanf("%s", ch);

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] < 'A' | ch[i] > 'Z')
        {
            c = 1;
        }
    }
    if (c == 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}