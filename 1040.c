#include <stdio.h>
 
int main() {
 
    double n1,n2,n3,n4,n5,av,rav;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    av=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    printf("Media: %.1lf\n",av);
    if(av>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(av<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(av>=5.0 && av<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);
        rav=(av+n5)/2;
        if(rav>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(rav<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",rav);
    }
 
    return 0;
}
