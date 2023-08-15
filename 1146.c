#include<stdio.h>
int main()
{
    int n,i,j;
    for(i=1;i>=1;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(j=1;j<n;j++)
        {
            printf("%d ",j);
        }
        printf("%d",n);
        printf("\n");
    }
    return 0;
}
