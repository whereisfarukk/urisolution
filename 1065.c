#include <stdio.h>
 
int main() {
 
    int x,even=0,i;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        { even=even+1;
        }
    }
        printf("%d valores pares\n",even);
        
        
 
    return 0;
}
