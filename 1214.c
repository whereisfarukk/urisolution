#include <stdio.h>

int main()
{
    int c,n,i,j;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d",&n);
        int num[n],sum=0,avr=0,l=0;
        for(j=0;j<n;j++)
        {
           scanf("%d",&num[j]);
        }
        for(j=0;j<n;j++)
        {
            sum=num[j]+sum;
        }
        avr=sum/n;
        for(j=0;j<n;j++)
        {
            if(num[j]>avr)
            {
                l++;
            }
        }
        printf("%.3lf%%\n",((double)l/n)*100);
    }


    return 0;
}
