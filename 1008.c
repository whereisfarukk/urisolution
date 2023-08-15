#include <stdio.h>
 
int main() {
 int NUMBER,h;
 double SALARY,s;
 scanf("%d %d",&NUMBER,&h);
 scanf("%lf",&s);
 SALARY=h*s;
 printf("NUMBER = %d\nSALARY = U$ %.2lf\n",NUMBER,SALARY);
    return 0;
}
