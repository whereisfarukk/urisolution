#include <stdio.h>
 
int main() {
 
    double i,j,s=0;
    for(i=1,j=1;i<=39;i=i+2,j=j*2)
    {
        s=s+(i/j);
    }
    printf("%.2lf\n",s);
    
 
    return 0;
}
