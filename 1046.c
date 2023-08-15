#include <stdio.h>
 
int main() {
 
    int a,b;
    scanf("%d %d",&a,&b);
    if(b<=a)
    { printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);
    }
    else if(b>a)
    { printf("O JOGO DUROU %d HORA(S)\n",(b-a));
    }
 
    return 0;
}
