#include <stdio.h>
 
int main() {
 
    int n,i,j=0;
    double x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x);
        while(1)
        {
            x=x/2;
            j++;
            if(x<=1)
            {
                break;
            }
        }
    printf("%d dias\n",j);
    j=0;
    }
        
    
 
    return 0;
}
