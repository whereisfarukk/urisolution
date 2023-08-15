#include<stdio.h>
#include<string.h>
int main()
{
   long long int N,i,j=0,k,l=0,sum=0,attacked;
    scanf("%lld",&N);
   long long int star[N];
    for(i=0;i<N;i++)
    {
        scanf("%lld",&star[i]);
    }
    for(i=0;i<N;i++)
    {
        if(star[i]==0)
        {
            break;
        }
        else if(star[i]%2==1)
        {
           j++;
            star[i]=star[i]-1;
        }
        else 
        {
            j++;
            break;
        }
    }
    if(star[i]%2==0 && i<N)
    {
    for(k=i;k>=0;k--)
    {
        if(star[k]==0)
        {
            break;
        }
        else
        {
            l++;
                star[k]=star[k]-1;
        }
    }
    }
    for(i=0;i<N;i++)
    {
        sum=sum+star[i];
    }
    attacked=j;
    printf("%lld %lld\n",attacked,sum);
}
