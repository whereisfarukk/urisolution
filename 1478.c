#include<stdio.h>
int main()
{
    int x,i,j;
    while(1)
    {
        scanf("%d",&x);
        int m[x][x];
        if(x==0)
        {
            break;
        }
        for(i=0;i<x;i++)
        {
            int k=1;
            for(j=i;j<x;j++)
            {
                m[i][j]=k;
                k++;
            }
        }
        for(i=x-1;i>=0;i--)
        {
            int k=1;
            for(j=i;j>=0;j--)
            {
                m[i][j]=k;
                k++;
            }
        }
        for(i=0;i<x;i++)
        {
            
            for(j=0;j<x;j++)
            {
                if(j==x-1)
               printf("%3d",m[i][j]);
               else
               printf("%3d ",m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
    }
    return 0;
}
