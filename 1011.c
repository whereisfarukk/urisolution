#include <stdio.h>
 
int main() {
 
    double pi=3.14159,R,VOLUME;
    scanf("%lf",&R);
    VOLUME=((4.0/3)*pi*pow(R,3));
    printf("VOLUME = %.3lf\n",VOLUME);
 
    return 0;
}
