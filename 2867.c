#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,m;
    while(t--)
    {
        scanf("%d%d",&n,&m);
        double lg=log10(n);
        lg*=m;
        printf("%0.lf\n",floor(lg)+1);
    }
}

