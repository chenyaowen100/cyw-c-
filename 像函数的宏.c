#include "stdio.h"
#define  cube(x)   ((x)*(x)*(x))
//这是一个带参数的宏，它被使用时，括号里的x可以被替换  

int main(){
	printf("%d\n",cube(5));//这里的cube(5)被替换成了((5)*(5)*(5))
	
	return 0;
} 
