#include<stdio.h>
#include<string.h>
int main()
{
     int n,m,i,j;
     char c[8];
     scanf("%d%d",&n,&m);
     j=m;
     for(i=0;i<j;i++)
     {
         scanf("%s",&c);
         if(strcmp(c,"fechou")==0)
         {
             n=n+1;
         }
         else
         {
             n=n-1;
         }
     }
     printf("%d\n",n);

    return 0;
}
