#include<stdio.h>
#include<string.h>
int main()
{
    int T,j,length;
    char str[100];
    scanf("%d",&T);
    for(j=0;j<T;j++){
        scanf("%s",str);
        length=strlen(str);

         if(0<=length && length<=25)
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
