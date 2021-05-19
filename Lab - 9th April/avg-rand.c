#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min=13, max=31, no=10;
    float avg;

    //scanf("%d %d %d", &min, &max, &no);
    srand(12345);

    for (int i = 0; i < no; i++) 
    {
        avg += rand()%(max-min+1)+min;    
    }

    avg = avg/no;

    printf("%.3f",avg);


}