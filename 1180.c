#include<stdio.h>
int main()
{
    int y,z=0,i,n;
    scanf("%d",&n);
    scanf("%d",&y);
    int x[n];
    for(i=1;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<y)
        {
            y=x[i];
            z=i;
        }
     
    }
    printf("Menor valor: %d\nPosicao: %d\n",y,z);
    return 0;
}
