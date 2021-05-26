#include <stdio.h>

void top(int cell, int arr[9][9])
{
    int topper1 = 0, topper2 = 3;
    if (cell == 1)
    {
        for (int i = topper1; i < topper2; i++)
        {
            printf("\n");
            for (int j = topper1; j < topper2; j++)
                printf("%d ", arr[i][j]);
        }
    }
    if (cell == 2)
    {
        for (int i = topper1; i < topper2; i++)
        {
            printf("\n");
            for (int j = 3; j < 6; j++)
                printf("%d ", arr[i][j]);
        }
    }
    if (cell == 3)
    {
        for (int i = topper1; i < topper2; i++)
        {
            printf("\n");
            for (int j = 6; j < 9; j++)
                printf("%d ", arr[i][j]);
        }
    }
}
void middle(int cell, int arr[9][9])
{
    int middler1 = 3, middler2 = 6;
    if (cell == 4)
    {
        for (int i = middler1; i < middler2; i++)
        {
            printf("\n");
            for (int j = 0; j < 3; j++)
                printf("%d ", arr[i][j]);
        }
    }
    if (cell == 5)
    {
        for (int i = middler1; i < middler2; i++)
        {
            printf("\n");
            for (int j = middler1; j < middler2; j++)
                printf("%d ", arr[i][j]);
        }
    }
    if (cell == 6)
    {
        for (int i = middler1; i < middler2; i++)
        {
            printf("\n");
            for (int j = 6; j < 9; j++)
                printf("%d ", arr[i][j]);
        }
    }
}
void bottom(int cell, int arr[9][9])
{
    int bottomer1 = 6, bottomer2 = 9;
    if (cell == 7)
    {
        for (int i = bottomer1; i < bottomer2; i++)
        {
            printf("\n");
            for (int j = 0; j < 3; j++)
                printf("%d ", arr[i][j]);
        }
    }
    if (cell == 8)
    {
        for (int i = bottomer1; i < bottomer2; i++)
        {
            printf("\n");
            for (int j = 3; j < 6; j++)
                printf("%d ", arr[i][j]);
        }
    }
    if (cell == 9)
    {
        for (int i = bottomer1; i < bottomer2; i++)
        {
            printf("\n");
            for (int j = bottomer1; j < bottomer2; j++)
                printf("%d ", arr[i][j]);
        }
    }
}
int main()
{
    int arr[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int cell;
    scanf("%d", &cell);

    if (cell == 1 | cell == 2 | cell == 3)
    {
        top(cell, arr);
    }
    if (cell == 4 | cell == 5 | cell == 6)
    {
        middle(cell, arr);
    }
    if (cell == 7 | cell == 8 | cell == 9)
    {
        bottom(cell, arr);
    }
    if (cell > 9 | cell < 1)
    {
        printf("INVALID INPUT");
    }
}