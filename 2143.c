#include <stdio.h>

int main()
{
   int t,x,i;
   while(scanf("%d",&t))
   {
       if(t==0)
       {
           break;
       }
       else
       {
         for(i=0;i<t;i++)
         {
           scanf("%d",&x);
           if(x%2!=0)
           printf("%d\n",((x-1)*2)+1);
           else
           printf("%d\n",((x-1)*2));

         }
       }
   }
    return 0;
}
