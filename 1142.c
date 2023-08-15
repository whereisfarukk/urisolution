#include<stdio.h>
int main()
{
    int a=1,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d ",a);
            a=a+1;
            if(j==3)
            {
                printf("PUM");
                a=a+1;
            }
        }
        printf("\n");
    }
    return 0;
}
