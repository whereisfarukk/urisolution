#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0;
    int p;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    if(a>0)
    {
        i1=i1+1;
    }
    if(b>0)
    {
        i2=i2+1;
    }
    if(c>0)
    {
        i3=i3+1;
    }
    if(d>0)
    {
        i4=i4+1;
    }
    if(e>0)
    {
        i5=i5+1;
    }
    if(f>0)
    {
        i6=i6+1;
    }
    p=i1+i2+i3+i4+i5+i6;
    printf("%d valores positivos\n",p);
    return 0;
}
