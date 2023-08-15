#include <stdio.h>

int main()
{
   int  t,n,i,j,temp,k;
   scanf("%d",&t);
   for(k=1;k<=t;k++)
   {
       scanf("%d",&n);
       int x[n];
       for(j=0;j<n;j++)
       {
           scanf("%d",&x[j]);
       }
       for(i=1;i<n;++i)
       {
		for(j=0;j<(n-i);++j)
        {
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
        }

       }
       printf("Case %d: %d\n",k,x[n/2]);
   }
    return 0;
}
