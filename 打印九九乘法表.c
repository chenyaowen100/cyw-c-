#include"stdio.h"
int main(){
int a,b,c,d;
a=1;b=1;
c=b;
int n;
scanf("%d",&n); 
while(b<=n){
	while(a<=n){
		if(a<=b){printf("%d*%d=%d  ",a,b,a*b);
		    if(a*b<10){printf(" ");}}
		if(a==b){printf("\n");}
	
	a++;}
	a=c;
b++;
}
return 0;} 
