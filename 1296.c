#include<stdio.h>
#include<math.h>
int main()
{
    double m1,m2,m3,s;
    while(scanf("%lf%lf%lf",&m1,&m2,&m3)!=EOF)
    {
        if(m1+m2>m3 && m1+m3>m2 && m2+m3>m1)
        {
            s=(m1+m2+m3)/2.00;
           printf("%.3lf\n",(4.00/3)*sqrt(s*(s-m1)*(s-m2)*(s-m3)));
        }
        else
        {
            printf("-1.000\n");
        }
    }
  return 0;
}

