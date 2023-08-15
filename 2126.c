#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l=0,m=0,l1=0,l2=1;
    char n1[10],n2[32];
    while(scanf("%s%s",&n1,&n2)!=EOF)
    {

     for(i=0;i<strlen(n2);i++)
     {
         if(n1[0]==n2[i])
         {

             for(j=0,k=i;j<strlen(n1);j++,k++)
             {
                 if(n1[j]==n2[k])
                 {
                    l++;
                 }
             }
         }
         if(l==strlen(n1))
         {
             m++;
             l1=i+1;
         }
         l=0;
     }
     if(m>0)
     {
         printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",l2++,m,l1);
     }
     else
     {
         printf("Caso #%d:\nNao existe subsequencia\n\n",l2++);
     }
     m=0;l1=0;

    }

    return 0;
}
