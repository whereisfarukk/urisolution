#include<stdio.h>
int main()
{
    int x,y,a,sum=0,i;
    scanf("%d %d",&x,&y);
    if(x>=y)
    { 
        y=y+1;
        a=(x-y);
        for(i=1;i<=a;i++)
        {
            if(y%2!=0)
            {
                sum=sum+y;
                
            }
            y=y+1;
            
        } 
      
  
    }
        else if(x<y)
    {
        x=x+1;
        a=(y-x);
        for(i=1;i<=a-1;i++)
        {
            if(x%2!=0)
            {
                sum=sum+x;
            }
            x=x+1;
        }
  
    }
    printf("%d\n",sum);
    return 0;
}
