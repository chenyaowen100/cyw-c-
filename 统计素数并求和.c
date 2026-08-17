#include "stdio.h"
int main()
{int x;
int count=0;
int sum=0;
int m,n; 
scanf("%d %d",&m,&n);
if(m==1){m=2;}
for(x=m;x<=n;x++){
	int i;
	int isprime=1;
	for(i=2;i<x;i++){
	if(x%i==0){
		isprime=0;
		break;}	                    
	}if(isprime==1){
		count++; 
		sum+=x;
	}
    }       
	printf("该区间素数个数:%d  这些素数的和:%d",count,sum);          
	 return 0; 
} 
