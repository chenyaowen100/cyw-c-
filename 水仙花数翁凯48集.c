//水仙花数，例如153等于这三个数字的三次方的和
#include"stdio.h"
int main()
{int n;
scanf("%d",&n); //输入水仙花数的位数 
int x=n; //x是为了求出来mask 
int y=n;
int mask=1;
int m=0; //m是为了求出来mask 
printf("水仙花数的位数是%d\n",n); 
while(m<x-1){
	mask=mask*10;
	m++;}
int z;int sum=0;int r; 
int dmask=mask*10;
while(mask<dmask){
int mask1=mask;
	while(mask1>0){
		z=mask1%10;
		int r=z;
		int count=0;
		while(count<n-1){z=z*r;
		count++;
		}
		sum=sum+z;
		mask1/=10;}
	if(sum==mask){printf("%d\n",mask);}
	sum=0;
	mask++;
}
return 0;} 
