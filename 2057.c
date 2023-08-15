#include<stdio.h>
int main()
{
    int s,t,f;
    scanf("%d%d%d",&s,&t,&f);
    if(s+t+f>=0 && s+t+f<24)
    {
        printf("%d\n",s+t+f);
    }
    else if(s+t+f>=24)
    {
        printf("%d\n",(s+t+f)-24);
    }
    else if(s+t+f<0)
    {
         printf("%d\n",24+(s+t+f));
    }
    return 0;
}

