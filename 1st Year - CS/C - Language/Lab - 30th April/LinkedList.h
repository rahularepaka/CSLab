#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
};
typedef struct Node Node; //don't bug me again
typedef Node* List;

//------------
List makeList(){ 
    //this function create a fresh new list
    //eg: List L = makeList();
    Node* newNode_p = (Node*)malloc(sizeof(Node));
    newNode_p->data = -99999;
    newNode_p->next = NULL;

    return newNode_p;
}

//------------

void append(List L, int elem){
    //append elem to the end of L
    //eg: append(L, 4);
    while(L->next != NULL){
        L = L->next;
    }
    Node* newNode_p = (Node*)malloc(sizeof(Node));
    newNode_p->data = elem;
    newNode_p->next = NULL;

    L->next = newNode_p;

    return;
}

//------------
void printList(List L){
    //prints the elements of list from first to last
    //eg: printList(L);
    printf("[");
    while(L->next != NULL){
        L = L->next;
        printf("%d ", L->data); //note that there will be an extra space after the last element.
    }
    printf("]\n");
}

//------------

int removeElem(List L, int elem){
    //removes the first occurance of an element from the list
    //suppose L = [3, -5, 6, 7, 8, 7, 9, -1]
    //remove(L, 7) returns [3, -5, 6, 8, 7, 9, -1]
    if(L->next == NULL){
        printf("can't perform deletion operation on an empty list\n");
        return -1;
    }
    /* else if((L->next)->data == elem){
        Node* currNode_p = L->next;
        L->next = currNode_p->next;
        free(currNode_p);
    } */
    else{
        Node* prevNode_p = L;
        Node* currNode_p = L->next;

        while(1 == 1){
            
            if(currNode_p->data == elem){
                prevNode_p->next  = currNode_p->next;
                free(currNode_p);
                printf("%d has been removed\n", elem);
                return 0;
            }
            else if(currNode_p->next == NULL){
                break;
            }
            prevNode_p = currNode_p;
            currNode_p = currNode_p->next;
        }
        printf("%d does not exist in the given list\n", elem);
        return -1;
    }
}

//------------

int length(List L){
    //returns the no. of elements in a list
    //eg: length(L)
    int res = 0;
    while(L->next != NULL){
        res++;
        L = L->next;
    }
    return res;
}

//------------

int access(List L, int ix){
    //returns the element sitting in the ixth position of the list.
    if(ix >= length(L)){
        printf("the index is outofRange\n");
        return -88888;
    }

    int i = 0;
    while(i <= ix){
        L = L->next;
        i += 1;
    }
    return L->data;
}

//------------
