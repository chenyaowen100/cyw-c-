//strchr从字符串左边开始找字符，找到之后返回那个字符的地址 
//strrchr从右边开始找 
//strstr是用来在字符串当中找一个字符串的 
//strcasestr是在第三行这个寻找的过程当中忽略大小写 
#include"stdio.h"
#include"string.h"
int main()
{
	char s[]="hello";
	char*p=strchr(s,'l');
	p=strchr(p+1,'l');//有这行就可以找到第二个l的地址，没有就找第一个 
	printf("%s\n",p);
	return 0;
	
 } 
