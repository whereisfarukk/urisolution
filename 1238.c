#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[50],ch2[50];
    int i,x,k=0;
    scanf("%d",&x);
    while(k<x)
   {
    scanf("%s %s",&ch1,&ch2);
    if(strlen(ch1)>=strlen(ch2))
    {
        for(i=0;i<strlen(ch1);i++)
        {
            if(i<strlen(ch1))
            {
                printf("%c",ch1[i]);
             }
            if(i<strlen(ch2))
            {
                printf("%c",ch2[i]);
            }
        }
        printf("\n");
    }
    else if(strlen(ch1)<strlen(ch2))
    {
        for(i=0;i<strlen(ch2);i++)
        {
            if(i<strlen(ch1))
            {
                printf("%c",ch1[i]);
             }
            if(i<strlen(ch2))
            {
                printf("%c",ch2[i]);
            }
        }
        printf("\n");
    }
    k++;
   }
    return 0;
}
