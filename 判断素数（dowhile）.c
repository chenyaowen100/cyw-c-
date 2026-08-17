#include "stdio.h"
int main()
{int x;
int isPrime=1;
scanf("%d",&x);
int i=2;
do{ i++;
if(x%i==0){isPrime=0;} 
}while(i<x); 
if(isPrime==1){
	printf("是素数");
} else{printf("不是素数"); 
}}
