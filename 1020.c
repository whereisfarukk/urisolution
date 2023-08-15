#include <stdio.h>
 
int main() {
 
    float y,m,n,d;
    int years,months,days;
    scanf("%f",&n);
    y=n/365;
    years=n/365;
    m=((y-years)*365)/30;
    months=((y-years)*365)/30;
    days=(n-years*365-months*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);
    return 0;
}
