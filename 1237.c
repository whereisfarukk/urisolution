#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int i,j,k,l,d=0,c=0,l1,l2,max=0;
    while(gets(a) && gets(b)){
        d=0;c=0;max=0;
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1;i++)// at first i=0;means str[a] first character will search for it matchin in str[b] in the next loop
    {
        for(j=0;j<l2;j++)// first character of str[a],i=0 ;will search for the matching in str[b]
        { c=0;
           if(a[i]==b[j])// if any character of string[a] found a matchin character in string[b]
            {
               for(k=i,l=j;k<l1,l<l2;k++,l++)//after findig matchig this loop will seach how long its get matched
                {
                    if(a[k]==b[l])
                    {
                        c++;
                        if(l==l2-1)//enter this if when l will go to the last of string[b]
                        {  
                            if(c>=max)
                            max=c;
                         
                        }
                    } 
                    else// when a[k]!=b[l],means no match
                    { 
                        if(c>=max)
                        {
                            max=c;
                        }
                     
                        break;
                    }
                  
                }
            
            }
            
        }
        
    }
   printf("%d\n",max);
    }
    return 0;
}
