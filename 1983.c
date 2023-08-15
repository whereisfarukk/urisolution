#include <stdio.h>

int main() {

    int n,m,i,temp;
    double note,max=0.0;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
       scanf("%d%lf",&m,&note);
       if(note>max)
      {
          max=note;
          temp=m;
      }
   }
      if(max>=8.0)
      {
          printf("%d\n",temp);
      }
      else
      {
          printf("Minimum note not reached\n");
      }

    return 0;
}

