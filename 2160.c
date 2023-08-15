#include<stdio.h>
#include<string.h>
int main()
{
    char l[600];
    gets(l);
    if(strlen(l)>80)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}

