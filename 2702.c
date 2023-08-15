#include<stdio.h>
int main()
{
    int a1,b1,c1,a2,b2,c2,d1=0,d2=0,d3=0;
    scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
    if(a2>=a1)
    {
        d1=a2-a1;
    }
    if(b2>=b1)
    {
        d2=b2-b1;
    }
    if(c2>=c1)
    {
        d3=c2-c1;
    }
    printf("%d\n",d1+d2+d3);
    return 0;
}
