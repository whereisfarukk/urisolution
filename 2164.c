#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x;
    scanf("%d",&n);
    x=(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    printf("%.1lf\n",x);
    return 0;
}
