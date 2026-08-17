//strcmp（string compare） 用来比较两个字符串的大小 
//如果s1>s2,返回一个正数
//如果s1=s2，返回零
//如果s1<s2,返回一个负数 
#include"stdio.h"
#include"string.h"
int mycmp(const char*s1,const char*s2){
int idx=0;
while(s1[idx]==s2[idx]&&s1[idx]!='\0'){//这里两段代码拿哪段都一样 
s1++;s2++;}
return s1[idx]-s2[idx];
//	while(*s1==*s2&&*s1!='0'){
//		s1++;s2++;
//	}
//	return *s1-*s2; 
} 
//返回的是ASCII的差值 

int main()
{
	char s1[]="abc";
	char s2[]="Abc";
	printf("%d\n",mycmp(s1,s2));//这里的mycmp相当于功能演示，可以直接用strcmp函数 
}
//比较的是ASCII码的大小，从第一个字符开始比  
//如果前面的字符都一样，一个字符串最后多了一个字符，那就是这个字符串大 
