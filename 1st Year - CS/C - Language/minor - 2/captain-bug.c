#include <stdio.h>

char className[45];

char *read2array(char *filename, int line)
{
    int end, loop;
    char str[512];
    int currChar = 0;

    for (int i = 0; i < 30; i++)
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
        while (i + 1 < 45 && ((currChar = fgetc(fd)) != EOF))
        {
            className[i++] = currChar;
        }
    }

    fclose(fd);

    //printf("%s", className);

    return className;
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
        //arr[n][i] = read2array(filename,i);
        //char *c = read2array(filename, i);
        //printf("%s", c);
        //printf("%s", arr[i]);
    }
    
    for (int i = 0; i < 1; i++)
    {
        printf("%s", arr[i]);
    }

}
