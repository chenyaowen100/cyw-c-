#include"stdio.h"
enum color{red,yellow,green};//定义了一个名为color的枚举类型 

void f(enum color c);

int main()
{enum color t=red;//定义了一个类型是enum color的变量t，它的类型必须是color枚举里的东西 
scanf("%d",&t);   
f(t);
return 0;
 } 
 void f(enum color c)
 {
 	printf("%d",c);
 }
