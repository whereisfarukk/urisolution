#include <stdio.h>
 
int main() {
 
    int n,i;
    double a,b,c,av;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        av=(a*2+b*3+c*5)/(2+3+5);
        printf("%.1lf\n",av);
    }
 
    return 0;
}
