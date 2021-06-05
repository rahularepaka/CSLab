#include <stdlib.h>

// compare function, compares two elements
int compare(const void *num1, const void *num2)
{
    if (*(int *)num1 > *(int *)num2)
        return 1;
    else
        return -1;
}

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    qsort(a, 5, sizeof(int), compare);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}