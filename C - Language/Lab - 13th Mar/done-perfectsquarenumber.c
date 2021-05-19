#include <stdio.h>
#include <math.h>

//1 -> Perfect Square Number and 0 -> Nope
int checkperfectsquare(int n)
{
    double squareroot = sqrt(n);

    int check = squareroot;

    if (check == squareroot)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    //printf("N=");
    scanf("%d", &n);

    printf("%d", checkperfectsquare(n));
}