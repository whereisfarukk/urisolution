#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=9;i=i+2)
    {
        for(k=1,j=7;k<=3;k++,j=j-1)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
    return 0;
}
