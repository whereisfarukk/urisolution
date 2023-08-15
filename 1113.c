#include<stdio.h>
int main()
{
    int x,y,i;
    for(i=1;i>=1;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y) 
        {
            printf("Decrescente\n");
        }
        else if(y>x)
        {
            printf("Crescente\n");
        }
        else 
        break;
    }
    return 0;
}
