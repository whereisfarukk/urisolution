#include<stdio.h>
int main()
{
    int i,n,a=0,g=0,d=0;
    for(i=1;i>=1;i++)
    {
        scanf("%d",&n);
        if(n==1)
        {
            a=a+1;
        }
        else if(n==2)
        {
            g=g+1;
        }
        else if(n==3)
        {
            d=d+1;
        }
        else if(n==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}
