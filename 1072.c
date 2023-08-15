#include<stdio.h>
int main()
{
    int N,X,i,in=0,out=0; 
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
       scanf("%d",&X);
        if(X>=10 && X<=20)
        {
          in=in+1;  
        }
        else
        {
            out=out+1;
        }
                
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
    
}
