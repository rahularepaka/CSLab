#include <stdio.h>
#include <math.h>

int isPerfect(long double x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);

        if(sr * sr == x)
        {
            return sr;
        }
    }
    return 0;
}

long long int frog(user)
{
    long long int sn = 0;

    long long int i = 0;

    while (sn < user)
    {
        i++;
        if (isPerfect(i))
        {
            sn += isPerfect(i);
        }
        else
        {
            sn += 1;
        }
    }

    printf("%lld", i);
}

int main()
{
    long long int user;
    scanf("%lld",&user);

    frog(user);

}