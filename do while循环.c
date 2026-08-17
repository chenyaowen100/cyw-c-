#include "stdio.h"
int main()
{int x;
int n=0;
scanf("%d",&x);
do{x=x/10;
n=n+1;
}while(x>0);
printf("%d",n); 
return 0;
} 
