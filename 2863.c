#include<stdio.h>
int main()
{
    int t,i;
    while(scanf("%d",&t)!=EOF)
    {
        double x,initial=100;
        for(i=0;i<t;i++)
        {
            scanf("%lf",&x);
            {
                if(x<initial)
                {
                    initial=x;
                }
            }
        }
        printf("%.2lf\n",initial);
    }
    return 0;
}

