#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,m;
    char str[1000];
    char rev[1000];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        gets(str); //input string//
        int l=strlen(str);
        for(j=0;j<l;j++){
            if((str[j]>='A'&&str[j]<='Z')||str[j]>='a'&&str[j]<='z')
                str[j]=str[j]+3;//passing 3 lettrrs right the input string//
               }
        int m=0;
        for(j=l-1;j>=0;j--){
            rev[m]=str[j];  //after passing 3 letter reverse the whole string//
            m++;
        }
        rev[m]='\0';//input reversing string last carecter. ecause every string last caracter is '\0'//
        int k=l/2;
        for(j=k;j<l;j++){
            rev[j]=rev[j]-1;
        }
        printf("%s\n",rev);//final encrypted output//
    }
    return 0;
}
