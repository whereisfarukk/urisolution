#include <stdio.h>
#include<math.h> 
int main() {
 
    int N,i,j;
    while(1)
    {
        i=0;j=0;
        scanf("%d",&N);
        if(N==0)
        {
            break;
        }
        else
        {
            long long int array[N][N];
            for(i=0;i<N;i++)
            {
                for(j=0;j<N;j++)
                {
                    array[i][j]=pow(2,j+i);
                }
            }
            for(i = 0;i <N;i++)
            {
             for(j = 0;j <N;j++)
             {
        
                if(N==3 || N==4)
                {
                       if(j==0)
                       printf("%2lld",array[i][j]);
                       else
                       printf("%3lld",array[i][j]);
                }
                else if(N==5)
                {
                       if(j==0) 
                       printf("%3lld",array[i][j]);
                       else
                       printf("%4lld",array[i][j]);
                }
                else if(N==6 || N==7)
                {
                       if(j==0)
                       printf("%4lld",array[i][j]);
                       else
                       printf("%5lld",array[i][j]);
                }
                else if(N==8 || N==9)
                {
                       if(j==0)
                       printf("%5lld",array[i][j]);
                       else
                       printf("%6lld",array[i][j]);
                }
                else if(N==10)
                {
                       if(j==0)
                       printf("%6lld",array[i][j]);
                       else
                       printf("%7lld",array[i][j]);
                }
                else if(N==11 || N==12)
                {
                       if(j==0)
                       printf("%7lld",array[i][j]);
                       else
                       printf("%8lld",array[i][j]);
                }
                else if(N==13 || N==14)
                {
                       if(j==0)
                       printf("%8lld",array[i][j]);
                       else
                       printf("%9lld",array[i][j]);
                }
                else if(N==15)
                {
                       if(j==0)
                       printf("%9lld",array[i][j]);
                       else
                       printf("%10lld",array[i][j]);
                }
                else if(N==1)
                {
                printf("%1lld",array[i][j]);
                }
                else if(N==2)
                {
                    if(j==0)
                    printf("%lld",array[i][j]);
                    else
                    printf("%2lld",array[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

                    
    }
        
 
    return 0;
}
