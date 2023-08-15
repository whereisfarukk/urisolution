#include<stdio.h>
int main()
{
    int n;
    long long int a,b,l=0;
    scanf("%d",&n);
    while(n--){
        scanf("%lld %lld",&a,&b);
     if(a >= b)
        {
            while(b!=0)
            {
                if(b%10!=a%10)
                {
                    printf("nao encaixa\n");
                    l++;
                    break;
                }
                a/=10;
                b/=10;
            }
            if(l==0)
            {
            printf("encaixa\n");
            }
        }
        else
        {
            printf("nao encaixa\n");
        }
        l=0;
    }
    return 0;
}

