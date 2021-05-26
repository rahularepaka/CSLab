#include <stdio.h>

void finder()
{
    char filename[50];
    char open[100];
    int n, r, w, a;

    scanf("%s", filename);
    FILE *fd = fopen(filename, "r");

    scanf("%d%d", &n, &r);
    w = (5 * (n - 1)) + r;
    
    mainer(open,w,fd);
}

void mainer(char *open, int w, FILE** fd)
{
    for (int a = 1; a <= 30; a++)
    {
        fscanf(fd, "%s", open);
        if (a == w)
        {
            printf("%s ", open);
        }
    }
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        finder();
    }
}
