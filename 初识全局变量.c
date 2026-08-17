#include "stdio.h"
void f(void);

int gall=12;
int g2; 
//全局变量如果不初始化的话默认为零
//如果是指针的话也是零（null） 
//初始化时必须用编译时已知的值，
//比如说不能写int gall=f（）
//也不能写int g2=gall（除非gall是const，并且删掉gall+=2;，但就算这样也非常不建议这样写）
//（全局变量的初始化必须用常量，gall也是变量） 
int main(){
	printf("%d\n",gall);//12 
	f();
	printf("%d\n",gall);//14（没使用指针也能改变值，因为这个变量是全局变量） 
} 

void f(void){
	printf("%d\n",gall);//12
	gall+=2;
	printf("%d\n",gall);//14
}
