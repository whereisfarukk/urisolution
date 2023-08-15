#include<stdio.h>
int main()
{
    double i=0,n,sum=0; 
    double av;
    while(1)
    {
        scanf("%lf",&n);
        if(n>=0)
        {
            sum=sum+n;
            i++;
        }
        else 
        break;
    }
    av=sum/i;
    printf("%.2lf\n",av);
    return 0;
}
