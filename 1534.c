#include<stdio.h>
int main()
{
    int i,j,x;
    while(scanf("%d",&x)!=EOF)
    { 
       int m[x][x];
        for(i=0;i<x;i++)
         {
          for(j=0;j<x;j++)
            {
              m[i][j]=3;
            }
         }
        for(i=0;i<x;i++)
            {
                m[i][i]=1;
            }
        for(i=0,j=x-1;i<x,j>=0;i++,j--)
         {
            m[i][j]=2;
         }
        for(i=0;i<x;i++)
         {
          for(j=0;j<x;j++)
            {
              printf("%d",m[i][j]);
            }
            printf("\n");
         }

    }
    return 0;
}
