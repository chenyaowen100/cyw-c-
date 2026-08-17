//static   adj.静止的
/*静态本地变量实际上是特殊的全局变量
它们位于相同的内存区域
静态本地变量具有全局的生存期，函数内的局部作用域*/ 
#include "stdio.h"

void f(void);

int main(){
	f();
	f();//这里是为了跑多几次f函数 
	f();
	f();
} 

void f(void){
static int all=1;   //static的作用是使变量只被初始化一次 
printf("%d\n",all); //下次再进这个函数的时候变量的值还是上次离开函数时的值 
all+=2;
printf("%d\n",all);
}
