#include<stdio.h>
int main()
{
    int i,n,s,b,a,s1,b1,a1,sc=0,bc=0,ac=0,ssc=0,sbc=0,sac=0;
    char str[50];
    float p1,p2,p3;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s",str);
        scanf("%d %d %d %d %d %d",&s,&b,&a,&s1,&b1,&a1);
        sc += s;
        bc += b;
        ac += a;
        ssc += s1;
        sbc += b1;
        sac += a1;
    }
    p1 = (100.0/sc)*ssc;
    p2 = (100.0/bc)*sbc;
    p3 = (100.0/ac)*sac;
    printf("Pontos de Saque: %.2f %%.\n",p1);
    printf("Pontos de Bloqueio: %.2f %%.\n",p2);
    printf("Pontos de Ataque: %.2f %%.\n",p3);
    return 0;
}
