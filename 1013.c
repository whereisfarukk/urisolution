#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    x1=(a+b+abs(a-b))/2;
    x2=(x1+c+abs(x1-c))/2;
    printf("%d eh o maior\n",x2);
    return 0;
}
