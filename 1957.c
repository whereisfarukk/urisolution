#include<stdio.h> 

int main()
{   
    long long int num;    
    int i = 0, rem,j;
    char hex_arr[50];

    scanf("%lld", &num);      

    while(num != 0)
    {
        rem = num % 16;  

        if (rem < 10)
        {
            hex_arr[i++] = 48 + rem;
        }
        else
        {
            hex_arr[i++] = 55 + rem;
        }

        num /= 16;  
    }

    for(j = i - 1; j >= 0 ; j--)  
    {
        printf("%c", hex_arr[j]);
    }  
    printf("\n");

    return 0;
}
