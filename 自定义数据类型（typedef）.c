#include"stdio.h"
int main(){}
/*例如：   typedef int length;这样会使得length成为int类型的别名
所以代码就可以写成length a,b,c;
.          又或者是length numbers[10]； 

如果用结构体来举例呢 
就是原来是							struct point{
.											int x;
.											int y;
.											}; 
然后后面要用到这个结构体的时候就要写	struct point B={0,0};
感觉非常之繁琐啊
那我们就可以改成				typedef struct point{
.											int x;
.											int y;
.											}A;
这时候A相当于struct point，可以直接写  A  B={0,0}	
.								typedef struct {        甚至我们可以不要这个point啊 
.											int x;
.											int y;
.											}A;
.					  				   A  B={0,0}			

 




















*/ 
