#ifndef _MAX_H_ //(if not define)如果没有定义这个宏
//就继续复制文本到#include这个头文件的地方
//如果已经定义了
//就直接跳到 #endif 那里 
#define _MAX_H_
struct a{
	int b;
	int c; 
}; 
int max(int a, int b);
extern int gall;
//extern可以告诉编译器在整个项目的某个地方有个叫gall的东西



//一般只有声明可以被放在头文件中，这是规则不是法律
//所以违反了可能不会报错，但是容易出问题
#endif 
