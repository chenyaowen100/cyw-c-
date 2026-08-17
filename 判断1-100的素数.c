#include "stdio.h"
int main()
{int x;
int count=0;
//scanf("%d",&x);
for(x=2;x<=100;x++){
	int i;
	int isprime=1;
	for(i=2;i<x;i++){
	if(x%i==0){
		isprime=0;
		printf("%d不是素数\n",x);
		break;}
	                    	//printf("%d\n",i);
	}if(isprime==1){
		printf("%d是素数\n",x);
		count++; 
	}
    }                  return 0; 
} 
