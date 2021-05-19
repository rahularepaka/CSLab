#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromecheck(char s[1000])
{
    for (int i = 0; s[i]; i++)
    {
        s[i] = tolower(s[i]);
    }

    int i, count = 0;

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == s[strlen(s) - i - 1])
            count++;
    }

    if (count == i)
        return 1;
    else
        return 0;
}

int main()
{
    char s[1000];
    scanf("%[^\n]", &s);

    printf("%d", palindromecheck(s));
}