#include "stdio.h"
int main()
{int y;
int n=0;
printf("请输入数字，我来帮您判断这个数字有多少位"); 
scanf("%d",&y);
int x=y;
n=n+1;
y=y/10; 
while(y>0)
{n=n+1;
y=y/10;
}
printf("这个数字的位数是%d\n",n);
int mask=1;
int m=0;
while(m<n-1){
	mask=mask*10;
	m++;}	printf("mask是%d\n",mask);
do{int d=x/mask;
printf("%d",d);
if (mask>=10){
printf(" ");}
x=x%mask;
mask=mask/10;
}while(mask>0);
	return 0;
}
