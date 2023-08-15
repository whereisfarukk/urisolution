#include <stdio.h>
 
int main() {
 long long int sum,sum1,sum2;
 int m,n,i; 
 while(scanf("%lld %lld",&m,&n)!=EOF){
     sum1=1;sum2=1;
 for(i=1;i-1<m;i++)
 {
     sum1=sum1*i;
 }
 for(i=1;i-1<n;i++)
 {
     sum2=sum2*i;
 }
 sum=sum1+sum2;
 printf("%lld\n",sum);
     
 }
 
    return 0;
}
