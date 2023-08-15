#include <stdio.h>
 
int main() {
 
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        if(i==N-1)
        {
            printf("Ho!\n");
        }
        else
        {
            printf("Ho ");
        }
    }
 
    return 0;
}
