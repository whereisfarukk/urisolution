#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(a+b<=n)
    {
        printf("Farei hoje!\n");
    }
    else
    {
        printf("Deixa para amanha!\n");
    }
    return 0;
}

