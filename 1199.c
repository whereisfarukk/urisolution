#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void hex(char x1[])
{
   long long int i,l1=0,l2=0,j;
    for(i=0,j=2;i<strlen(x1)-2;i++,j++)
    {
        x1[i]=x1[j];
    }
    x1[i]='\0';
    j=0;
    for(i=strlen(x1)-1;i>=0;i--)
    {
        
        if(x1[i]>=65 && x1[i]<97)
        {
        l1=x1[i]-55;
        l2=l1*pow(16,j)+l2;
        j++;
        }
        else if(x1[i]>=97)
        {
            l1=x1[i]-87;
            l2=l1*pow(16,j)+l2;
            j++;
        }
        else
        {
        l1=x1[i]-48;
        l2=l1*pow(16,j)+l2;
        j++;
        }
    }
    printf("%lld\n",l2);
}
void dec(char x2[])
{
   long long int x3=atoi(x2);
    long int remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];
	quotient = x3;
	while(quotient!=0) {
		temp = quotient % 16;
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}

    printf("0x");
	for (j = i -1 ;j> 0;j--)
	{
	      printf("%c",hexadecimalNumber[j]);
	}
	printf("\n");
	
}
int main()
{
    char n[100];
   while(1)
   {
        gets(n);
        if(atoi(n)<0)
        {
            break;
        }
        if(n[1]==120)
        {
            hex(n);
        }
        else
        {
            dec(n);
        }
   }
 
    return 0;
}

