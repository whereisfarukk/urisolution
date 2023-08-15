#include<stdio.h>
int main()
{
    int i,j,k,n=7;
    for(i=1;i<=9;i=i+2)
    {
        for(k=1,j=n;k<=3;k++,j=j-1)
        {
            printf("I=%d J=%d\n",i,j);
        }
        n=n+2;
    }
    return 0;
}
