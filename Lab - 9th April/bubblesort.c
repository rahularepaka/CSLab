#include <stdio.h>

void sort_bubble(int n,int* a)
{
    int *p;
    p = &a[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&a[i]);
    }

    sort_bubble(n,a);

}