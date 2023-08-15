#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)!=EOF)
    {
        int matrix[n][n];
        k=n-1;
        l=n/3;
        m=n-l;
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
               if(i==j)
               {
               matrix[i][j]=2;
               }
               else if(j==k)
               {
               matrix[i][j]=3;
               }
               else
               {
               matrix[i][j]=0;
               }
            }
            k--;
        }
        for(i = l;i < m;i++)
        {
            for(j = l;j < m;j++)
            {
                if(i==n/2 && j==n/2)
                {
                matrix[i][j]=4;
                }
                else
                {
                matrix[i][j]=1;
                }
            }
        }
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                printf("%d",matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
