#include<stdio.h>
int main()
{
    double sum=0,i,x;
    int k=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&x);
        if(x>0)
        {
            sum=sum+x;
            k=k+1;
        }
    }
    printf("%d valores positivos\n%.1lf\n",k,(sum/k));
    return 0;
}
