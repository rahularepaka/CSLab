#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main(){
    char s[100][100],c[100]={0};
    FILE *fp;
    char l[100]={0};
    fp=fopen("data.txt","r");
    int i=0,j,k;

    if(fp==NULL)
    {
        exit(1);
    }
 
    while(fgets(c,sizeof(c),fp)!= NULL&& strcpy(s[i],c)!=NULL )
    { 
        for(k=i;k>0;k--)
        {   
            for(j = k-1;j>=0;j--)
                if(strcmp(s[j],s[k])>0)
                {
                    strcpy(l,s[j]);
                    strcpy(s[j],s[k]);
                    strcpy(s[k],l);
                }   
        }
        i++;
    }

    for(j=0;j<i;j++)
    {
        printf("%s",s[j]);
    }
    
    fclose(fp);
    return 0;
}