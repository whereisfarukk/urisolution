#include <stdio.h>
 
int main() {
 
    int x,i,j,sum=0;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x%2==0)
        {
            for(j=1;j<=5;j++)
            {
                sum=sum+x;
                x=x+2;
            }
        } 
        else
        {
            x=x+1;
            for(j=1;j<=5;j++)
            {
                sum=sum+x;
                x=x+2;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
 
    return 0;
}
