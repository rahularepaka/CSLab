#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    const char **str_a = (const char **)a;
    const char **str_b = (const char **)b;
    return strcmp(*str_a, *str_b);
}

int main()
{
    int i = 0, numbers = 2;
    char *array[] = {"Rzhul","Rounak"};

    qsort(array, numbers, sizeof(char *), compare);

    for (i = 0; i < numbers; i++)
    {
        printf("%s \n", array[i]);
    }
    
    return 0;
}