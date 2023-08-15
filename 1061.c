#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,l1,l2,l3,t1,t2,t3,t4,total,d,h,m,s;
  scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);
    t1=60-s1+s2;
    t2=60-m1+m2-1;
    t3=24-h1+h2-1;
    t4=d2-d1-1;
    total=(t1+t2*60+t3*3600+t4*86400);
    d=total/86400;
    l1=(total%86400);
    h=l1/3600;
    l2=l1%3600;
    m=l2/60;
    l3=l2%60;
    s=l3;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
    return 0;
    
}
