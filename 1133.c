#include <stdio.h>
 
int main() {
 
    int x,y,i,d;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        d=x-y;
        y=y+1;
        for(i=1;i<=d-1;i++)
        {
            if(y%5==2 || y%5==3)
            {
                printf("%d\n",y);
            }
            y=y+1;
        }
    }
    if(y>x)
    {
        d=y-x;
        x=x+1;
        for(i=1;i<=d-1;i++)
        {
            if(x%5==2 || x%5==3)
            {
                printf("%d\n",x);
            }
            x=x+1;
        }
    }
        
 
    return 0;
}
