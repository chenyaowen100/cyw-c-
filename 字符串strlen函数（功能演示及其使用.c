#include"stdio.h"
#include"string.h"
size_t mylen(const char*s)//这个函数是函数strlen的功能演示 
{
	int idx=0;//在这个函数里面传进来的是数组的首地址，所以不能用sizeof判断长度 
	while(s[idx]!='\0'){
		idx++;
	}
	return idx; 
}

int main()
{
	char line[]="hello";
	printf("strlen=%lu\n",mylen(line));//这里的mylen相当于函数strlen 
	printf("sizeof=%lu",sizeof(line));//strlen的作用是算字符串长度，不包括最后的0 
	
	return 0; 
}
//strlen（string length）是字符串长度的缩写 
