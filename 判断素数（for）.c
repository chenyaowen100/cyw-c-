#include "stdio.h"
int main()
{int x;
int count=0;
//scanf("%d",&x);
for(x=2;count<50;x++){
	int i;
	int isprime=1;
	for(i=2;i<x;i++){
	if(x%i==0){
		isprime=0;
		break;}
	                    	//printf("%d\n",i);
	}if(isprime==1){
		printf("%dÊÇËØÊý\n",x);
		count++; 
	}
    }                  return 0; 
} 
