#include <stdio.h>

int bubblesort(int* a,int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (int h = j; h < n; h++)
                {
                    a[h] = a[h + 1];
                }

                n--;
                j--;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
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


    bubblesort(a,n);
    
}