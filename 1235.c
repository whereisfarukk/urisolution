#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],b[102];
    int x,i,j,k;
    scanf("%d",&x);
    getchar();
    for(i=0;i<x;i++)
    { 
        int l=0,m=0;
        gets(a);
        m=strlen(a);
        l=m/2;
        for(j=l-1,k=0;j>=0;j--,k++)
        {
            b[k]=a[j];
        }
        
        for(j=m-1,k=k;j>=l;j--,k++)
        {
          b[k] = a[j];
        }
        b[k]='\0';
        printf("%s",b);
        printf("\n");
        
    }
    return 0;
}
