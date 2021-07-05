#include <stdio.h>
#include <string.h>


int main()
{
    FILE *f;
    char data[256];
    char *d;
    char *c[128] = {0};
    d = &c[0];
    int i = 0;
    if ((f = fopen("data.txt", "r")) == NULL)
    {
        exit(0);
    }
    else
    {
        while (fgets(data, 50, f) != NULL)
        {
            c[i] = strdup(data);
            printf("%s", c[i]);
            i = i + 1;
        }
        fclose(f);
    }

    //printf("%s",c);
}