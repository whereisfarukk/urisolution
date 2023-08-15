#include<stdio.h>
int main()
{
    int i,a,b,c,in,count;
    while(scanf("%d",&a)!=EOF){
        count=0;
        scanf("%d %d",&b, &c);
        for(i = 0;i < a;i++)
        {
            scanf("%d",&in);
            if(in>=b && in <= c)
            {
             count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
