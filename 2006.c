#include<stdio.h>
int main()
{
    int T,x,i,j=0;
    scanf("%d",&T);
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        if(T==x)
        {
            j++;
        }
    }
    printf("%d\n",j);

    return 0;
}
