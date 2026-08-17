//strcpy cpy是copy 
#include"stdio.h"
#include"string.h"
char* mycpy(char*dst,const char* src){//char*是返回类型，代表会返回一个指针 
//	int idx=0;
//	while (src[idx]){
//		dst[idx]=src[idx];
//		idx++;
//	}
//	dst[idx]='\0';
//	
char*ret=dst;
while(*dst++=*src++);
return ret;
}
int main()
{
	char s1[]="abc";
	char s2[]="bca";
	char*a=strcpy(s1,s2);//这个的原理相当于上面的mycpy函数 
	printf("%p",a);
	return 0;
}
