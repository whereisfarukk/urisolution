#include <stdio.h>
 
int main() {
 
    int n,i,x,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(j=2;j<x;j++)
        {
            if(x%j==0)
            {
                sum=sum+1;
            }
        }
        if(sum==0) 
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
        sum=0;
    
    }
                
        
 
    return 0;
}
