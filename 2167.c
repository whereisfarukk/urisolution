#include<stdio.h>
#include<string.h>
int main()
{
    int n,r,p,l=0,i;
    scanf("%d%d",&n,&p);
    for(i=2;i<=n;i++)
    {
        scanf("%d",&r);
        if(r>=p)
        {
            p=r;
        }
        else
        {
            printf("%d\n",i);
            l++;
            break;
        }

    }
    if(l==0)
       {
           printf("0\n");
       }
    return 0;
}
