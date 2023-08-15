#include<stdio.h>
int main()
{
    double m[12][12],sum=0,av;
    char ch;
    int i,j,x;
    scanf("%d %c",&x,&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
        }
    }
    if(ch=='S')
    {
        for(i=0;i<12;i++)
        {
            sum=sum+m[i][x];
        }
        printf("%.1lf\n",sum);
    }
    if(ch=='M')
    {
        for(i=0;i<12;i++)
        {
            sum=sum+m[i][x];
        }
        av=sum/12;
        printf("%.1lf\n",av);
    }
    
    return 0;
    
}
