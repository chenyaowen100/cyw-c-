#include"stdio.h"
void swap(int *pa,int *pb);
int main(void){
	int a=5;
	int b=6;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}

void swap(int *pa,int *pb){
	int t=*pa;
	*pa=*pb;
	*pb=t;
}

//如果传 入是swap的是实际的值，是无法完成变量交换的 
