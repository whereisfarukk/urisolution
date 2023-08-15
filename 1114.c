#include<stdio.h>
int main()
{
    int x,y=2002,i;
    for(i=1;i>=1;i++)
    {
        scanf("%d",&x);
        if(x==y)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else if(x!=y) 
        {
            printf("Senha Invalida");
            
        }
        printf("\n");
    }
    
    return 0;
}
