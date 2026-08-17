#include"stdio.h"
void f(int *p);
void g(int k);
int main(void)
{int i=6;
printf("%p\n",&i);//输出i的地址 
f(&i);
g(i);
return 0;
}

void f(int *p){
	printf("p=%p\n",p);//输出的值是地址 
printf("*p=%d\n",*p);//输出的其实就是i，因为输出的是这个地址上的变量的值 
*p=26; //这行真的可以改变i的值，通过地址在函数内部访问i 
}

void g(int k){
	printf("k=%d\n",k);
}
//int*p里的*p和第十五行的*p并不是一个意思
//int的那个是类型说明，说明p是一个指针类型的变量
//p就是一个地址，*p是这个地址所对应的实际的值 

//指针还有很常用的应用场景就是函数只能通过return返回
//一个值，但是如果用指针可以得到多个值，具体可看 
//利用指针写swap函数交换变量 
