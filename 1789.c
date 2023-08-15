#include<stdio.h>
int main()
{
    int n,i,j,x,l=0,k;
   while(scanf("%d",&n)!=EOF)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&x); 
        if(x>l)
        {
            if(x<10)
            {
            k=1;
            }
            else if(x>=10 && x<20)
            {
                k=2;
            }
            else if(x>=20)
            {
                k=3;
            }
            l=x;
        }            
        
    }
    printf("%d\n",k);
   l=0;
   }
    return 0;
 }
