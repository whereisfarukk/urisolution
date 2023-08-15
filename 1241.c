#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int i,j,x,l1,l2,k;
    scanf("%d",&x);
    for(k=1;k<=x;k++)
    { 
        int c=0;
        scanf("%s %s",&a,&b);
        l1=strlen(a);l2=strlen(b);
        if(l1>=l2)
        {
           for(i=l2,j=l1;i>=0;i--,j--) 
            {
                if(a[j]!=b[i])
                c++;
            }
            if(c==0)
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
        }
        else
        {
            printf("nao encaixa\n");
        }
    }
    return 0;
}
