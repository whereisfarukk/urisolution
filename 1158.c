#include<stdio.h>
int main()
{
    int i,n,a,b,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a%2==0)
        {
            a=a+1;
            for(j=1;j<=b;j++)
            {
                sum=sum+a;
                a=a+2;
            }
        }
        else
        {
            for(j=1;j<=b;j++)
            {
                sum=sum+a;
                a=a+2;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
