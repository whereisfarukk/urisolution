#include <stdio.h>
 
int main() {
 
    int x[20],y[20],i,j;
    for(i=0;i<20;i++)
    {
        scanf("%d",&x[i]);
    }
    i=0;
    for(j=0,i=19;i>=0,j<20;i--,j++)
    {
        y[j]=x[i];
        printf("N[%d] = %d\n",j,y[j]);
    }
    
 
    return 0;
}
