#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    scanf("%s", a);

    int n = strlen(a);

    int sum=0;
    int min,plus = 0;

    for (int i = 0; i < n; i++)
    {
        if((int)a[i] == 45)
        {
            min++;
        }
        if((int)a[i] == 43)
        {
            plus++;
        }
        if((int)a[i] == 49)
        {
            if(min%2 == 0)
            {
                sum += 1;
            }
            else
            {
                sum -= 1;
                min = 0;
            }
        }    
    }



    printf("%d",sum);

}