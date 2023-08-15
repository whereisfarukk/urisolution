#include <stdio.h>
 
int main() {
 
    int i=1,j=1,sum=0,k,n;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        if(k==n)
        {
            printf("%d\n",sum);
        }
        else
        printf("%d ",sum);
        i=sum;
        sum=i+j;
        j=i;
    }
    return 0;
}
