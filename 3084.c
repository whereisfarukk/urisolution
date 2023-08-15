#include<stdio.h>
int main()
{
    double h,m;
    while(scanf("%lf%lf",&h,&m)!=EOF)
    if((h/360)*12>=10 &&(m/360)*60>=10)
    {
        printf("%.0lf:%.0lf\n",(h/360)*12,(m/360)*60);
    }
   else if((h/360)*12>=10 &&(m/360)*60<10)
    {
        printf("%.0lf:0%.0lf\n",(h/360)*12,(m/360)*60);
    }
   else if((h/360)*12<10 &&(m/360)*60>=10)
    {
        printf("0%.0lf:%.0lf\n",(h/360)*12,(m/360)*60);
    }
   else if((h/360)*12<10 &&(m/360)*60<10)
    {
        printf("0%.0lf:0%.0lf\n",(h/360)*12,(m/360)*60);
    }
  return 0;
}

