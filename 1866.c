#include <stdio.h>
 
int main() {
 
    int C,i,N,j,sum;
    scanf("%d",&C);
    for(i=1;i<=C;i++)
    {
        scanf("%d",&N);
        for(j=1;j<=N;j++)
        {
            if(j%2==0)
            {
                sum=sum-1;
            }
            else
            {
                sum=sum+1;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
 
    return 0;
}
