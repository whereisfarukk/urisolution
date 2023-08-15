#include <stdio.h>
 
int main() {
 
    double x[100];
    int i,j;
    for(i=0;i<100;i++)
    { 
      scanf("%lf",&x[i]);
    }
    for(j=0;j<100;j++)
    {
        if(x[j]<=10)
        {
            printf("A[%d] = %.1lf\n",j,x[j]);
        }
    }
 
    return 0;
}
