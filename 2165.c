#include<stdio.h>
#include<string.h>
int main()
{
    int t[160];
    gets(t);
    if(strlen(t)>140)
    {
        printf("MUTE\n");
    }
    else
    {
        printf("TWEET\n");
    }
    return 0;
}

