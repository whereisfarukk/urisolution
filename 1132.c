#include <stdio.h>
 
int main() {
 
    int x,y,i,sum=0,d;
    scanf("%d %d",&x,&y);
    if(x<=y)
    {
        d=y-x;
        for(i=1;i<=d+1;i++)
        {
            if(x%13!=0)
            {
                sum=sum+x;
            }
            x=x+1;
        }
    }
    if(x>y)
    {
        d=x-y;
        for(i=1;i<=d+1;i++)
        {
            if(y%13!=0)
            {
                sum=sum+y;
            }
            y=y+1;
        }
    }
    printf("%d\n",sum);
 
    return 0;
}
