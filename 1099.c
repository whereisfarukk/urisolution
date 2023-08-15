#include<stdio.h>
int main()
{
    int n,i,j,k,x,y,sum=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            d=x-y;
            y=y+1;
            for(j=1;j<=d-1;j++)
            {
                if(y%2==1)
                {
                    sum=sum+y;
                }
                y=y+1;
            }
           
        }
       else if(x<y)
        {
            d=y-x;
            x=x+1;
            for(k=1;k<=d-1;k++)
            {
                if(x%2==1)
                {
                    sum=sum+x;
                }
                x=x+1;
                
            }
        }
        else if(x==y)
        {
            sum=sum;
            
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
