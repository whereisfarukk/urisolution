#include<stdio.h>
int main()
{
    int i,j,x,n,m;
    while(1)
    { 
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        int a[x][x];
        if(x%2==1)
        {
            m=((x/2)+1);
        }
        else
        {
            m=x/2;
        }
        for(n=0;n<m;n++)  /*this is input*/
        {
            for(i=n;i<x-n;i++)
            {
                for(j=n;j<x-n;j++)
                {
                   a[i][j]=n+1;
                }
            }
        }
        for(i=0;i<x;i++) /*this is output*/
            {
                for(j=0;j<x;j++)
                {
                  if(j==x-1)
                  {
                      printf("%3d",a[i][j]);
                  }
                  else{
                  printf("%3d ",a[i][j]);
                  }
                }
            printf("\n");
           }
           printf("\n");
     }
    return 0;
}
