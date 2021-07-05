#include <stdio.h>

int main(void)
{
    int end, loop, line;
    char str[512];
    FILE *fd = fopen("data.txt", "r");
    if (fd == NULL)
    {
        printf("Failed to open file\n");
        return -1;
    }
    printf("Enter the line number to read : ");
    scanf("%d", &line);

    for (end = loop = 0; loop < line; ++loop)
    {
        if (0 == fgets(str, sizeof(str), fd))
        {            //include '\n'
            end = 1; //can't input (EOF)
            break;
        }
    }
    if (!end)
        printf("%s,", str);
    fclose(fd);

    return 0;
}