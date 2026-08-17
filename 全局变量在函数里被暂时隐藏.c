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
	printf("%d\n",gall);//12
} 

void f(void){
	int gall=1;         //新定义的变量跟全局变量同名
//这个函数在这行开始gall跟外面的gall没有一点关系，也完全影响不到外面的gall 
	printf("%d\n",gall);//1
	gall+=2;
	printf("%d\n",gall);//3
}
