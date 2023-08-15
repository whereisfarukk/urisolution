#include <stdio.h>
 
int main() {
    char ch[20]; 
    double a,b,TOTAL;
    scanf("%s",&ch);
    scanf("%lf %lf",&a,&b);
     TOTAL=a+(b*0.15);
     printf("TOTAL = R$ %.2lf\n",TOTAL); 
    return 0;
}
