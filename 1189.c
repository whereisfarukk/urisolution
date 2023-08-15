#include<stdio.h>
int main()
{
    double m[12][12],sum=0,av;
    char ch;
    int i,j,k=0;
    scanf("%c",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
        }
    }
    if(ch=='S')                     /*in this problm i just let colum in row and row in colum*/
    {
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<12-(i+1);j++)
            {
                   sum=sum+m[j][i];
            }            
        }
        printf("%.1lf\n",sum);
    }
    if(ch=='M')
    {
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<12-(i+1);j++)
            {
                sum=sum+m[j][i];
                k=k+1; 
            }
        }
        av=sum/k;
        printf("%.1lf\n",av);
    }
    
    return 0;
    
}
