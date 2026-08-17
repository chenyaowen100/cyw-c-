#include "stdio.h"
int main()
{int x;
scanf("%d",&x);
int digit;
int ret;
while(x>0){
	digit=x%10;
	ret=ret*10+digit;
	x=x/10;
}
printf("%d",ret);
return 0;
}
