#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    signed long long int x;
    signed long long int y;

    scanf("%lld %lld", &x, &y);

    char a[1000];

    scanf("%s", a);

    long long int n = strlen(a);

    for (long long int i = 0; i < n; i++)
    {
        if (a[i] == 78)
        {
            y = y + 1;
            x += 0;
            //printf("(%lld, %lld)", x, y);
        }
        if (a[i] == 83)
        {
            y = y - 1;
            x += 0;
            //printf("(%lld, %lld)", x, y);
        }
        if (a[i] == 87)
        {
            x = x - 1;
            y += 0;
            //printf("(%lld, %lld)", x, y);
        }
        if (a[i] == 69)
        {
            x = x + 1;
            y+= 0;
            //printf("(%lld, %lld)", x, y);
        }
        if (a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
        {
            //int k = &a[i]; //3
            int k_pos = i; //8
            //int k_final = a[i-k]; //E

            int j = k_pos-1;

            int chk = 0;

            while(chk < a[i])
            {
                if (a[j] == 78)
                {
                    y = y - 1;
                    x += 0;
                    //printf("(%lld, %lld)", x, y);
                }
                if (a[j] == 83)
                {
                    y = y + 1;
                    x += 0;
                    //printf("(%lld, %lld)", x, y);
                }
                if (a[j] == 87)
                {
                    x = x + 1;
                    y += 0;
                    //printf("(%lld, %lld)", x, y);
                }
                if (a[j] == 69)
                {
                    x = x - 1;
                    y += 0;
                    //printf("(%lld, %lld)", x, y);
                }

                j--;
                chk++;

                //printf("(%lld, %lld)", x, y);
            }
        }
        //printf("(%lld, %lld)", x, y);
    }

    printf("(%lld, %lld)", x, y);
}