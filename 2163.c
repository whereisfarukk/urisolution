#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j,i1,j1,k=0,l=0,x,y;
    scanf("%d%d",&n,&m);
    int terrain[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&terrain[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          if(terrain[i][j]==42)
          {
            if(terrain[i-1][j-1]==7 && terrain[i-1][j]==7 && terrain[i-1][j+1]==7 && terrain[i][j-1]==7 && terrain[i][j+1]==7 && terrain[i+1][j-1]==7 && terrain[i+1][j]==7 && terrain[i+1][j+1]==7 )
            {
              x=i+1;y=j+1;
              l++;
            }
          }
        }
    }
    if(l==1)
        printf("%d %d\n",x,y);
    else
        printf("0 0\n");
    return 0;
}
