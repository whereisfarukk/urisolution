#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0,l;
    char x[55],y[55];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(x);
        if(x[0]==' ' || x[0]=='.')// if the string start with space or dot
        {
        for(j=0;j<strlen(x);j++)
        {
            if(x[j]==' ' || x[j]=='.')
          
            { 
                
                if(x[j+1]>='a' && x[j+1]<='z')
                {
                y[k]=x[j+1];
                k++;
                    }
            }
        }
       y[k]='\0';
        printf("%s\n",y);
        k=0;
        }
  
        
    else //if the string start without any space or dot
        { 
            k=1;//because k=0 or x[0]=first letter of the word
        for(j=1;j<strlen(x);j++)
        {
            if(x[j]==' ' || x[j]=='.')
          
            { 
                
                if(x[j+1]>='a' && x[j+1]<='z')
                {
                y[k]=x[j+1];
                k++;
                    }
            }
        }
            y[0]=x[0];
       y[k]='\0';
           
        printf("%s\n",y);
        k=0;
        }
  
        }
    return 0;
}
