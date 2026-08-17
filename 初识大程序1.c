#include <stdio.h>

#include "max.h"
#include "min.h"

//把函数的原型放到了头文件中（以.h结尾），在需要调用这个函数的 
//源代码文件中（以.c结尾），#include这个头文件，就能让编译器在 
//编译的时候知道函数的原型 
 
//int max(int a, int b);这行就是函数的原型
// 在#include "（头文件）max.h"之后就可以省略这行 

int main(void)
{
    int a=5;
    int b=6;
    printf("%d\n", max(a,b));
	printf("%d\n", max(a,gall));//这是另一个文件定义的全局变量 
    return 0;
}

//#include会把那个文件的全部文本内容原封不动地插入它所在的地方  
//#include <stdio.h>也是一样的 
