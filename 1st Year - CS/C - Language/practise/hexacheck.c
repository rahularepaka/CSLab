#include <stdio.h>
#include <ctype.h>


int CheckHex(char word[100])
{
    int count = 0;
    int a[10000];
    int check;

    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        if (isxdigit(word[i]))
        {
            a[i] = 1;  //UPPER = 1 and LOWER = 0
        }
        else
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i < count; i++)
    {
        if(a[i] == 0) {check = 1;printf("No"); break;}
    }

    if(check != 1) printf("Yes");
}

int main()
{
    char word[100];
    scanf("%s", word);

    CheckUpper(word);
}