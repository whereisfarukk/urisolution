#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,B,C,difference1,difference2;
    scanf("%d%d%d",&A,&B,&C);
    difference1=abs(A-B);
    difference2=abs(B-C);
    if(A>B && B<=C)
    {
        printf(":)\n");
    }
    else if(A<B && B>=C)
    {
        printf(":(\n");
    }
    else if((A<B && B<C) && (difference1<=difference2))
    {
        printf(":)\n");
    }
    else if((A<B && B<C) && (difference1>difference2))
    {
        printf(":(\n");
    }
    else if((A>B && B>C) && (difference1>difference2))
    {
        printf(":)\n");
    }
    else if((A>B && B>C) && (difference1<=difference2))
    {
        printf(":(\n");
    }
    else if(A==B)
    {
       if(B<C)
        {
            printf(":)\n");
        }
        else 
        {
            printf(":(\n");
        }
    }
        
    return 0;
}
