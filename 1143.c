#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d",i,i*i,i*i*i);
        printf("\n");
    }
    return 0;
    
}
