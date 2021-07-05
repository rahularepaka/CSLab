#include <stdio.h>

void seatfinder(int s)
{
    int sf = s%12;

    if(sf == 1 | sf == 6 | sf == 7 | sf == 0)
    {
        printf("Yay! Window!");
    }
    if(sf == 2 | sf == 5 | sf == 8 | sf == 11)
    {
        printf("FML! Middle!");
    }
    if(sf == 10 | sf == 4 | sf == 3 | sf == 9)
    {
        printf("Cool! Aisle!");
    }
}

int main()
{
    int se;
    scanf("%d",&se);

    seatfinder(se);
}