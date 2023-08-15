#include <stdio.h>
 
int main() {
 
    int n,i,x;
    unsigned long long int a; 
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&x);
         a=pow(2,x)/12000;
         printf("%llu kg\n",a);
     }
    return 0;
}
