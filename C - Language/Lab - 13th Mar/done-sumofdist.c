#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int user_input[n];

    int temp;

    int modi[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &user_input[i]);
    }

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n - 1; l++)
        {
            if (user_input[l] > user_input[l + 1])
            {
                temp = user_input[l];
                user_input[l] = user_input[l + 1];
                user_input[l + 1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(user_input[i] == user_input[i+1])
        {
            for(int k=i+1;k<n;k++)
            {
                user_input[k] = user_input[k+1];
            }
            n--;
        }
    }
    
    int sum=0;

    for(int i=0;i<n;i++)
    {   
        if(user_input[i] != user_input[i+1])
            sum +=user_input[i];
    }

    printf("%d",sum);
}