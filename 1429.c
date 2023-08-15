#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int i,j;
    while(scanf("%s",&str))
    {
     if(str[0]!='0')
     {
        int n=strlen(str);
        int a[n];
        long long acm=0;
        int b[6];
        b[4]=120;
        b[3]=24;
        b[2]=6;
        b[1]=2;
        b[0]=1;
        for(i=0;i<n;i++)
        {
            a[i]=str[i]-48;
        }
        for(i=0,j=n-1;i<n;i++,j--)
        {
            acm=acm+(a[i]*b[j]);
        }
        printf("%lld\n",acm);
        }
     else
      {
       break;
      }
    
    }
    return 0;
}
