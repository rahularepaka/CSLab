#include <stdio.h>

struct Measurement
{
    int inches;
    float feet;
};

int main()
{
    struct Measurement M1;
    struct Measurement M2;

    scanf("%d",&M1.inches);
    scanf("%f", &M1.feet);

    scanf("%d", &M2.inches);
    scanf("%f", &M2.feet);
    

    printf("%d ",M1.inches + M2.inches);
    printf("%.1f", M1.feet + M2.feet);
}