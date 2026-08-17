#include "stdio.h"
int main()
{int n;
 int t;
 scanf("%d",&n);
 int min;
 int i;
 scanf("%d",&min);
 for(i=1;i<n;i++){
   scanf("%d",&t);
     if(t<min){min=t;}
}
 printf("%d",min);

return 0;}
