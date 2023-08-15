#include <stdio.h>
#include <stdlib.h>
int main()
{
    double frac;
    int  vote ,n,np = 0, i;
    while(scanf("%d", &n) != EOF){
        frac = (double)n * (2.0/3.0);
        np = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &vote);
            if(vote == 1)
            {
                np++;
            }
        }
        if(np >= frac)
        {
            printf("impeachment\n");
        }
        else{
            printf("acusacao arquivada\n");
        }
    }


    return 0;
}
