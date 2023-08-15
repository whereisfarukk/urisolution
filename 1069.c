#include<stdio.h>
#include<string.h>//1069
int main()
{
    int i,j,k=0,l=0,n,a;
    char x[1000];
    scanf("%d%*c",&n);
    for(a=0;a<n;a++)
    {
        j=0;l=0;k=0;
      gets(x);
      for(i=0;i<strlen(x);i++)
      {
        if(x[i]=='<')
        {
            for(j=i;j<strlen(x);j++)
            {
               if(j>l)
                {
                  if(x[j]=='>')
                  {
                     k++;
                     l=j;
                     break;
                  }
                }
            }
        }
      }
      printf("%d\n",k);
    }
  return 0; 
}
