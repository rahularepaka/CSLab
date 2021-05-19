#include <stdio.h>

long long int numberreader(char file_name[])
{
    long long int num;
    FILE *fptr;

    fptr = fopen(file_name, "r");

    if (fptr == NULL)
    {
        return -1;
        exit(0);
    }

    fscanf(fptr, "%lld,", &num);

    return num;

    fclose(fptr);
}

int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int sum = 0;

    for(int i=0;i<n;i++)
    {
        char file_name[50];
        scanf("%s", file_name);

        sum+= numberreader(file_name);
    }

    printf("%lld", sum/n);
}