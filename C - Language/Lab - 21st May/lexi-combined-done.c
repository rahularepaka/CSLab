#include <stdio.h>

char className[30];

char *read2array(char *filename, int line)
{
    int end, loop;
    char str[512];
    int currChar = 0;
    
    for(int i=0;i<30;i++)
    {
        className[i] = '\0';
    }

    int i = 0;

    FILE *fd = fopen(filename, "r");

    for (end = loop = 0; loop < line; ++loop)
    {
        if (0 == fgets(str, sizeof(str), fd))
        {
            end = 1;
            break;
        }
    }
    if (!end)
    {
        while (i + 1 < 30 && ((currChar = fgetc(fd)) != ' '))
        {
            className[i++] = currChar;
        }

        //printf("%s", str);
    }

    fclose(fd);

    //printf("%s", className);

    return className;
}

int compare(const void *a, const void *b)
{
    const char **str_a = (const char **)a;
    const char **str_b = (const char **)b;
    return strcmp(*str_a, *str_b);
}


int main()
{
    char filename[30];
    int n;

    scanf("%s", filename);
    scanf("%d", &n);

    char arr[n][30];

    for (int i = 0; i < n; i++)
    {
        //printf("%s ",read2array(filename, i));

        strcpy(arr[i], read2array(filename, i));
        //char *c = read2array(filename, i);
        //printf("%s", c);

        //printf("%s", arr[i]);
    }

    char temp[30];

    for (int i = 0; i < n-1; ++i)
    {
        for (int j = 0; j < n-1-i; ++j)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
}