#include <stdio.h>
 
int main() {
 
    double N,c;
    int n100,n50,n20,n10,n5,n2,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,c1,c2,c3,c4,c5,c6;
    scanf("%lf",&N);

        c=N*100;
        n100=c/(100*100);
        r1=(c-(n100*100*100));
        n50=r1/(50*100);
        r2=r1%(50*100);
        n20=r2/(20*100);
        r3=r2%(20*100);
        n10=r3/(10*100);
        r4=r3%(10*100);
        n5=r4/(5*100);
        r5=r4%(5*100);
        n2=r5/(2*100);
        r6=r5%(2*100);
        c1=r6/100;
        r7=r6%100;
        c2=r7/50;
        r8=r7%50;
        c3=r8/25;
        r9=r8%25;
        c4=r9/10;
        r10=r9%10;
        c5=r10/5;
        r11=r10%5;
        c6=r11;
      printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",n100);
    printf ("%d nota(s) de R$ 50.00\n",n50);
    printf ("%d nota(s) de R$ 20.00\n",n20);
    printf ("%d nota(s) de R$ 10.00\n",n10);
    printf ("%d nota(s) de R$ 5.00\n",n5);
    printf ("%d nota(s) de R$ 2.00\n",n2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",c1);
    printf ("%d moeda(s) de R$ 0.50\n",c2);
    printf ("%d moeda(s) de R$ 0.25\n",c3);
    printf ("%d moeda(s) de R$ 0.10\n",c4);
    printf ("%d moeda(s) de R$ 0.05\n",c5);
    printf ("%d moeda(s) de R$ 0.01\n",c6);

    
 
    return 0;
}
