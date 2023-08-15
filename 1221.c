#include<stdio.h>//1221//
int main()
{
    int N,i,k=0;
    long long int x,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%lld",&x);
        if(x==0 && x==1)
        {
            printf("Not Prime\n");
        }
        else if(x==2)
        {
            printf("Prime\n");
        }
        else
        {
        for(j=2;j<sqrt(x)+1;j++)
        {
            if(x%j==0)
            {
                k++;
            }
            if(k==1)
            {
                break;
            }
        }
        if(k==0)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
        k=0;
        } 
    }
    return 0;
}
