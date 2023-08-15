#include <stdio.h>
 
int main() {
 
    double x;
    scanf("%lf",&x);
    if(x>0 && x<=400.00)
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",(x+x*0.15),(x*0.15));
    else if (x>400.00 && x<= 800.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", (x*1.12), (x*0.12));
 else if (x>800.00 && x<= 1200.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", (x* 1.10), (x*0.10));
 else if (x>1200.00 &&x <= 2000.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", (x*1.07), (x*0.07));
 else
  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", (x*1.04), (x*0.04));
 return 0;


}
