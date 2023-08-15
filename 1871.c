#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,num[10],i,j,sum;
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m==0 && n==0)
        {
            break;
        }
        else 
        {   j=0;
            sum=m+n;
            while(1)
            {
                i=10;
                if(sum/i>0)
                {
                    num[j]=sum%i;
                    sum=sum-num[j];
                    sum=sum/i;
                    j++;
                }
                else 
                {
                    break;
                }
            }
            num[j]=sum;
            for(i=j;i>=0;i--)
            {
                if(num[i]!=0)
                printf("%d",num[i]);
            }
        }
        printf("\n");
    }
    
}
