#include <stdio.h>
#include <math.h>

int reverse(int num)
{
    int num_count = log10(num);

    if (num == 0)
        return 0;

    return ((num % 10 * pow(10, num_count)) + reverse(num / 10));
}

int main()
{
    int n;
    scanf("%d", &n);

    if(n == reverse(n))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

}