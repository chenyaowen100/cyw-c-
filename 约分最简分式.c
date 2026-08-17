#include"stdio.h"
int main()
{int a,b,c;
scanf("%d/%d",&a,&b);
int a1=a;
int b1=b;
while(b!=0){
	c=a%b;
	a=b; 
	b=c;
}
printf("%d/%d",a1/a,b1/a);
 } 
