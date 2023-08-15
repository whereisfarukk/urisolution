#include<stdio.h>
int main()
{
    int i,j,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d",&x);
        long long int fib[x];
        fib[0]=0,fib[1]=1;
        for(j=2;j<=x;j++)
        {
            
            fib[j]=fib[j-1]+fib[j-2];
            
        }
        printf("Fib(%d) = %lld\n",x,fib[x]);
    }
    
    
 return 0;   
}
