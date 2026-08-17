#include"stdio.h"
int main()
{int zheng;
scanf("%d",&zheng);
if(zheng<0)
{printf("fu ");
zheng=zheng*-1;}
int ret;
int digit=0;
int y=zheng;
int n=0;
int x=y;
n=n+1;
y=y/10; 
while(y>0)
{n=n+1;
y=y/10;}
int mask=1;
int m=0;
while(m<n-1){
	mask=mask*10;
	m++;}
	int ret2;
while(mask>0){
	ret2=zheng/mask;
	if(ret2==0){printf("ling");}if(ret2==1){printf("yi");}if(ret2==2){printf("er");}
	if(ret2==3){printf("san");}if(ret2==4){printf("si");}if(ret2==5){printf("wu");}
	if(ret2==6){printf("liu");}if(ret2==7){printf("qi");}if(ret2==8){printf("ba");}
	if(ret2==9){printf("jiu");}
zheng=zheng%mask;
mask/=10;
if(mask>0){printf(" ");};
}
return 0;}
