#include <stdio.h>

int main()
{
    int amt;
    int count = 0 ;
    int tamt = 0;

    int notes[8] = {500,100,50,20,10,5,2,1};

    scanf("%d", &amt);

    for(int i=0;i<8;i++)
    {
        count = amt/notes[i];
        amt = amt%notes[i];
        tamt += count;

    }
    
    printf("%d",tamt);

}