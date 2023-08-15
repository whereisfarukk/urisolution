#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{

    double v,d,area,height,r;
    while(scanf("%lf%lf",&v,&d)!=EOF)
    {
        r=d/2;
        area=PI*r*r;
        height=v/(PI*r*r);
       printf("ALTURA = %.2lf\nAREA = %.2lf\n",height,area);
    }
    return 0;
}
