#include <stdio.h>
#include<string.h>
int main() {
 
    int i=0,x,l,j,sum;
    char a[100]; 
    scanf("%d",&x);
    while(i<x)
    {
        sum=0;
        scanf("%s",&a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            
           if(a[j]=='1'){
           sum=sum+2;
           }
           else if(a[j]=='2' || a[j]=='3'|| a[j]=='5'){
           sum=sum+5;
           }
           else if(a[j]=='6' || a[j]=='9' || a[j]=='0'){
           sum=sum+6;
           }
           else if(a[j]=='7'){
               sum=sum+3;
           }
           else if(a[j]=='8'){
               sum=sum+7;
           }
           else if(a[j]=='4'){
               sum=sum+4;
           }
        }
        printf("%d leds\n",sum);
        i++;
    }
        
    return 0;
}
