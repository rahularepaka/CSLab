#include <stdio.h>

int remove_duplicate(int arr[], int n)
{

    if (n == 0 || n == 1)
        return n;

    int temp[n];

    int j = 0;
    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    temp[j++] = arr[n - 1];

    for (i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}

int main()
{
    int a[5];

    int n = sizeof a / sizeof *a;

    for (int i = 0; i < 5; i++)
    {
        /* code here */
        scanf("%d", &a[i]);
    }

    n = remove_duplicate(a, n);

    for (int i = 0; i < n; i++)
    {
        /* code here */
        printf("%d", a[i]);
    }
}
