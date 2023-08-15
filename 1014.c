#include <stdio.h>
 
int main() {
 
    int X;
    double Y,consuption;
    scanf("%d %lf",&X,&Y);
    consuption=X/Y;
    printf("%.3lf km/l\n",consuption);
 
    return 0;
}
