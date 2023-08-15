#include<stdio.h>

int main(){

 

    int t, av;

    double fuel;

 

     scanf("%d %d", &t, &av);

     fuel = ((t * av) / 12.0);

     printf("%.3lf\n", fuel);

     return 0;

 

}
