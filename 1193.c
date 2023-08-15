#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void dec(char y[])
{   
    int j,i=0;
    // hexadecimal convertion start....//
    int decemal=atoi(y);
    char hexa[50];
   while(decemal!=0)
    {    
        
        int l3=decemal%16;
        if(l3<10)
        {
            l3=l3+48;
           
        }
        else
        {
            l3=l3+87;
           
        }
        hexa[i++]=l3;
        
       
        decemal=decemal/16;
    }
   for(j=i-1;j>=0;j--)
    {
        printf("%c",hexa[j]);
    }
    printf(" hex\n");
   //...hexadecimal convertion end//
   decemal=0;j=0;i=0;
    //binary convertion start....//
     decemal=atoi(y);//this atoi() function convert a string into integer.For this atoi() function <stdlib.h> is needed//
    int binary[50];
    for(i=0;decemal>0;i++)
    {
        binary[i]=decemal%2;
        decemal=decemal/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    printf(" bin");
    decemal=0;j=0;
    i=0;
    //....binary convertion end//
}

void bin(char y[])
{
    int i,j=0,digit,l1=0;
    
    //decimal convertion start......//
    for(i=strlen(y)-1;i>=0;i--)
    {
        digit=y[i]-48;
        l1=digit*pow(2,j)+l1;
        j++;
    }
    printf("%d dec\n",l1);
    //....decimal convertion end//
    j=0;i=0;
    //hexadecimal convertion start....//
    int remainder=l1;
    char hexadecimal[50];
     while(remainder!=0)
    {    
        
        int l3=remainder%16;
        if(l3<10)
        {
            l3=l3+48;
           
        }
        else
        {
            l3=l3+87;
           
        }
        hexadecimal[i++]=l3;
        
       
        remainder=remainder/16;
    }
   for(j=i-1;j>=0;j--)
    {
        printf("%c",hexadecimal[j]);
    }
    printf(" hex");
   //...hexadecimal convertion end//
   remainder=0;j=0;
}

void hex(char y[])
{
    int i,j=0,digit=0,decimal=0,l3;
    char a[50];
    //decimal convertion start....//
    strcpy(a,y);
    for(i=strlen(a)-1;i>=0;i--)
    {
        
        if(a[i]>='a')
        {
        digit=a[i]-87;
        decimal=digit*pow(16,j)+decimal;
        j++;
        }
        else
        {
        digit=a[i]-48;
        decimal=digit*pow(16,j)+decimal;
        j++;
        }
    }
    printf("%d dec\n",decimal);
     //.....decimal convertion end//
     int l1=decimal;  
    //binary convertion start.....// 
    char binary[50]; 
    for(i=0;l1>0;i++)
    {
        binary[i]=l1%2;
        l1=l1/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    printf(" bin");
    //.....binary convertion end//
    l1=0;j=0;
}

int main()
{ 
    int n,k=1;
    char s[10],x[50],b[]="dec",c[]="bin",d[]="hex";
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%s%*c",&x);
        gets(s);
        printf("Case %d:\n",k);
        if(strcmp(s,b)==0)
        {
            dec(x);
        }
        if(strcmp(s,c)==0)
        {
            bin(x);
        }
        if(strcmp(s,d)==0)
        {
            hex(x);
        }
        printf("\n\n");
        n--;
        k++;
     }   
    return 0;
 }
