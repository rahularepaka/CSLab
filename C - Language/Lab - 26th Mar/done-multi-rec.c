#include <stdio.h>

int multirec(int n,int m)
{
    int pro = 1;

    if(n == 0 | m==0)
    {
        return 0;
    }
    else if(m == 1)
    {
        return n;
    }
    else
    {
        return n+multirec(m-1,n);
    }
}

int main()
{
    int a,b;
    
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d",multirec(a,b));

}