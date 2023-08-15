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
    if(ch=='S')
    {
        for(i=11;i>=7;i--)           /*i just solve the lower case prblm and let row i=colum and cloum j=row */
        {
            for(j=12-i;j<i;j++)
            {
                   sum=sum+m[j][i];
            }            
        }
        printf("%.1lf\n",sum);
    }
    if(ch=='M')
    {
        for(i=11;i>=12;i--)
        {
            for(j=12-i;j<i;j++)
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
