#include<stdio.h>
#include<string.h>
int main()
{
    int c,i,x;
    char name[10];
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%s%d",&name,&x);
        if(strcmp(name,"Thor")==0)/*we can also declare Thor as a string and compare it.if we don't declare Thor and if we want to use it direct in comparing we need to use ut in "" between them*/
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
   return 0; 
}
