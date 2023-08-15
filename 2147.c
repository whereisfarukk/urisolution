#include <stdio.h>

int main()
{
   int c,i,j;
   double t;
   char w[10000];
   scanf("%d",&c);
   for(i=0;i<c;i++)
   {
       scanf("%s",&w);
       t=0.01*strlen(w);
       printf("%.2lf\n",t);
   }
    return 0;
}
