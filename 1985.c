#include<stdio.h>
int main()
{
    int p,i,n,a;
    double money=0;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d%d",&n,&a);
        if(n==1001)
        {
           money=a*1.50+money;
        }
        if(n==1002)
        {
           money=a*2.50+money;
        }
        if(n==1003)
        {
            money=a*3.50+money;
        }
        if(n==1004)
        {
            money=a*4.50+money;
        }
        if(n==1005)
        {
            money=a*5.50+money;
        }
    }
    printf("%.2lf\n",money);
    return 0;
}
