#include<stdio.h>
#include<string.h>
int main()
{
    char diet[30],breakfast[30],lunch[30],dinner[30],left[30];
    int i,j,k,n,l1,l2,m,l;
    
    scanf("%d%*c",&n);
    for(i=0;i<n;i++)
    {
      int p=0,q=0,z=0,a=0,b=0;
        gets(diet);                               
        gets(breakfast);
        gets(lunch);
        
        l1=strlen(breakfast);
        l2=strlen(lunch);
        
        for(j=l1,k=0;j<l1+l2,k<l2;j++,k++)
        {
            breakfast[j]=lunch[k];/* coveting breakfast and luch into breakfast*/
        }
        breakfast[j]='\0'; 
         for(j=0;j<strlen(breakfast);j++)
        {
            z=0;
            for(m=0;m<strlen(diet);m++)
            {
                if(breakfast[j]==diet[m])
                {
                   
                  z++;
                    
                }                
           
            }       
            if(z==0)/*cheacking if he eaten exatra anything  that is not in the diet, if eaten than the first input is finish,if not then go to the next loop if q=0 */
           {
                printf("CHEATER");
                q++;
                break;
                            
            }
            
            
        }
     if(q==0)
      {
        for(j=0;j<strlen(diet);j++)
        {
           z=0;
            for(m=0;m<strlen(breakfast);m++)
            {
                if(diet[j]==breakfast[m])
                {
                   
                  z++;
                                    
                }                
           
            }       
            if(z>=2)
            {
                printf("CHEATER");/* cheacking if he eaten same thin 2 times,if he eat 2 times or more than he is cheated and the first input will be finished, if not then go to the nest loop */
                p++;
                break;
            }
            
            
        }
        if(p==0)
        {
                z=0;a=0;
        for(j=0;j<strlen(diet);j++)
          {
             z=0;       
            for(m=0;m<strlen(breakfast);m++)
             {
                if(diet[j]==breakfast[m])
                {
                   
                  z++;
                    
                }               
           
             }
            if(z==0)    
             {
                  dinner[a]=diet[j];/* if he don't eat any item from the diet, the foid will be store in dinner*/
                  a++;
             }       
          } 
        dinner[a]='\0';   
                          
         if(a>0)
          {
            
            for(j='A';j<='Z';j++)
                {
                for(z=0;z<strlen(dinner);z++)        
                   {
                   if(j==dinner[z])  
                       {
                       left[b]=dinner[z];/*converting dinner into left in alphabetic order*/
                                    b++ ; 
                       }    
                  
                   }
                               
                }          
             
           }        
            
        }              
      
      } 
        left[b]='\0';
        printf("%s",left);
        printf("\n");
  
    }
        
    
    return 0;
}
