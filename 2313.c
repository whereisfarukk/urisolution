#include <stdio.h>
#include <math.h>
int main(void){
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
//for double or float num we use "fabs" for absolute value//
    if ((fabs(b-c) < a && b+c > a) && (fabs(a-c) < b && a+c > b) && (fabs(b-a) < c && b+a > c)){
        if (a == b && b == c)
            printf("Valido-Equilatero\n");
        else if (a == b || b == c || a == c)
            printf("Valido-Isoceles\n");
        else
            printf("Valido-Escaleno\n");
        if (((a*a) == (b*b)+(c*c)) || ((b*b) == (a*a)+(c*c)) || ((c*c) == (b*b)+(a*a)))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");
    return 0;
}
