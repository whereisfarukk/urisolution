#include <stdio.h>
 
int main() {
 
    int a,b,d,e;
    double c,f,g;
    scanf("%d %d %lf %d %d %lf",&a,&b,&c,&d,&e,&f);
    g=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2lf\n",g);
 
    return 0;
} 
