#include<stdio.h>
int main()
{
    int n,x,l2=0,l3=0,l4=0,l5=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            l2++;
        }
        if(x%3==0)
        {
            l3++;
        }
        if(x%4==0)
        {
            l4++;
        }
        if(x%5==0)
        {
            l5++;
        }
    }
    printf("%d Multiplo(s) de 2\n",l2);
    printf("%d Multiplo(s) de 3\n",l3);
    printf("%d Multiplo(s) de 4\n",l4);
    printf("%d Multiplo(s) de 5\n",l5);



    return 0;
}
