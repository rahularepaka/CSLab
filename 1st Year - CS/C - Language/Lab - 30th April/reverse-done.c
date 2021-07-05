#include "LinkedList.h"

void reverse(List L,int sizeofList)
{
    List L1 = makeList();

    for (int i = sizeofList-1;i>=0;i--)
    {
        int c = access(L, i);
        append(L1,c);
    }

    printList(L1);
}

int main()
{

    List L = makeList();

    printList(L);
    printf("---\n");

    int sizeofList;
    scanf("%d", &sizeofList);

    for (int i = 0; i < sizeofList; i++)
    {
        int x;
        scanf("%d", &x);
        append(L, x);
    }

    reverse(L,sizeofList);

    
    return 0;
}
