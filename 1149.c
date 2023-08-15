#include<stdio.h>
int main()
{
    int a,n,i,sum=0,j;
    scanf("%d",&a);
    for(i=1;i>=1;i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            for(j=1;j<=n;j++)
            {
                sum=sum+a;
                a=a+1;
            }
            printf("%d\n",sum);
            break;
        }
    }
    return 0;
}
