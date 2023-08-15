#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,l=0;
    char s[20],s1[]="suco de laranja",s2[]="morango fresco",s3[]="mamao",s4[]="goiaba vermelha",s5[]="manga",s6[]="laranja",s7[]="brocolis";
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
        {
            break;
        }

       for(i=0;i<t;i++)
       {
        scanf("%d%*c",&n);
        gets(s);
        if(strcmp(s,s1)==0)
           {
             l=l+(120*n);
           }
        else if(strcmp(s,s2)==0)
           {
               l=l+(85*n);
           }

        else if(strcmp(s,s3)==0)
           {
               l=l+(85*n);
           }
        else if(strcmp(s,s4)==0)
           {
               l=l+(70*n);
           }
        else if(strcmp(s,s5)==0)
           {
               l=l+(56*n);
           }
        else if(strcmp(s,s6)==0)
           {
               l=l+(50*n);
           }
       else if(strcmp(s,s7)==0)
           {
               l=l+(34*n);
           }
       }
       if(l>130)
       {
           printf("Menos %d mg\n",l-130);
       }
       else if(l<110)
       {
           printf("Mais %d mg\n",110-l);
       }
       else
       {
           printf("%d mg\n",l);
       }
       l=0;
    }
    return 0;
}
