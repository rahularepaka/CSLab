#include <stdio.h>
#include <string.h>

int main()
{
    char u_ip;
    int m,n,ip;

    double div;
    float mult;

    scanf("%c", &u_ip);
    scanf("%d", &m);
    scanf("%d", &n);


    if('+' == u_ip) ip = 1;
    else if ('-' == u_ip) ip = 2;
    else if ('*' == u_ip) ip = 3;
    else if ('/' == u_ip) ip = 4;
    else ip = 5;

    switch(ip)
    {
        case 1:
            printf("%d",m+n);
            break;

        case 2:
            printf("%d", m - n);
            break;

        case 3:
            mult  = m * n;
            printf("%f", mult);
            break;

        case 4:
            div = (double)m / (double)n;
            printf("%f", div);
            break;

        case 5:
            break;
    
        default:
            break;
    
    }

}