#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b==c)|| (b+c==a)||(a+c==b)||(a==b)||(b==c)||(a==c))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
