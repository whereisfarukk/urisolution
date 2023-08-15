#include<stdio.h>
int main()
{
    int i,n;
    double x,y,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%lf %lf",&x,&y);
        if(y!=0)
        {
            d=x/y;
            printf("%.1lf\n",d);
        }
        else if(y==0)
        {
            printf("divisao impossivel\n");
        }
        
     }
    return 0;
    
}
