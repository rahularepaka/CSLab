#include "LinkedList.h"

int insert(List L, int elem, int ix)
{
    int finder = 0,count = 0;
    Node* currenN;
    Node* new = (Node*)malloc(sizeof(Node));

    if(ix <= length(L))
    {
        while(finder !=1)
        {
            currenN = L->next;
            if(count != ix)
            {
                ++count;
                L = L->next;
            }
            else if(count == ix)
            {
                new->data = elem;
                new->next = currenN;
                L->next = new;
                finder = 1;
                return 0;
            }
        }
        if (finder != 1)
        {
            return -1;
        }
        else
        {
            return -1;
        }
    }


}

int main(){
    
    List L = makeList();

    int sizeofList;
    scanf("%d", &sizeofList);
    
    for(int i = 0; i < sizeofList; i++){
        int x;
        scanf("%d", &x);
        append(L, x);
    }
    
    int trials;
    scanf("%d", &trials);
    for(int t = 0; t < trials; t++){
        int new_elem;
        int index;
        scanf("%d,%d", &new_elem, &index);
        int token = insert(L, new_elem, index);
        if(token == -1){
            printf("insertion operation failed\n");
            return 1;
        }
    }
    printList(L);
    return 0;
}


//@sad-masakali & co: focus on the problem. Don't go nuts about the plag check.
