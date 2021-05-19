#include <stdio.h>

int perfectnum(int n)
{
    int sum = 0;
    for(int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum = sum+i;
        }
    }
    if (sum == n)
        printf("1");
    else
        printf("0");
}

int main()
{
    int user_n;
    scanf("%d", &user_n);

    perfectnum(user_n);

}