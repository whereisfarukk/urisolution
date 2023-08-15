#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,n,i,j=0,l=0,x;
    scanf("%d%d%d",&p,&n,&l);
    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        if(abs(x-l)>p)
        {
            j++;
        }
        l=x;
    }
    if(j==0)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

}
