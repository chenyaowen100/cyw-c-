#include"stdio.h"
struct date{
	int month;
	int day;
	int year;
};
//	scanf("%d",&p.x);结构体输入的时候就是这样子 ，不像数组，需要用取地址符 
//	scanf("%d",&p.y);
int main()
{
	struct date today={07,31,2014};//前面已经有类型了，就不需要强制转换 
today=(struct date){07,31,2014};//强制类型转换，这样给today变量初始化
struct date thismonth={.month=7,.year=2014};//或者可以这样初始化（记得要有点） 
	                                     //没被赋值的量就是零 
	struct date day;
	day=today; //把today的年月日三个值赋给day,两个结构变量是可以赋值的 
	printf("今天是%i-%i-%i\n",day.year,day.month,day.day);
//printf这里，.的左边是结构变量，右边是被声明的成员变量名（相当于3-5行的year，month，day） 
	printf("今天是%i-%i-%i\n",today.year,today.month,today.day);
	//这时today和day的值完全一样
	day.year=2015; //这就能把year赋给day变量 
	printf("今天是%i-%i-%i\n",day.year,day.month,day.day);	
	return 0;
}
