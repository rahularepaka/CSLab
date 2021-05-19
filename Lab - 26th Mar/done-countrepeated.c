#include <stdio.h>
#include <string.h>

int main()
{
    char c[20000];
    scanf("%s", &c);

    int s = strlen(c);
    int sum = 0;

    
    for (int i = 0; i < s; i++)
    {
        
        int count = 0;
        for (int j = i + 1; j < s; j++)
        {
            if (c[i] == c[j])
            {
                count++;
                c[j] = '0';
            }
        }
        if (count > 0 && c[i] != '0')
            if((c[i] >= 'a' && c[i] <= 'z')| (c[i] >= 'A' && c[i] <= 'Z'))
                    sum += 1;
    }


    printf("%d",sum);

}