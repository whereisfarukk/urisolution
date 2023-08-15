#include<stdio.h>
#include<math.h>
int main()
{
    double h,deg,v,t,r,s,sinv,b;
    int p1,p2,n,i;
    while(scanf("%lf%d%d%d",&h,&p1,&p2,&n)!=EOF)
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf",&deg,&v);
        r=((3.14159)/180)*deg; //r(radian)=(π\180)×thet
        //if you want to fina the value of sin(theta) you have to written sin(rdian)
        t=(v*sin(r)+sqrt(pow(v*sin(r),2)+2*9.80665*h))/9.80665;
        s=v*cos(r)*t;
        if(s>=p1 && s<=p2)
        {
            printf("%.5lf -> DUCK\n",s);
        }
        else
        {
            printf("%.5lf -> NUCK\n",s);
        }
        
    }
    return 0;
}
