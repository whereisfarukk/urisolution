#include<stdio.h>
int main()
{
    int n[10],i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<10;j++)
    {
        if(n[j]>0)
        {
            printf("X[%d] = %d\n",(j),n[j]);
        }
        else 
        {
            printf("X[%d] = 1\n",(j));
        }
    }
    return 0;
}
