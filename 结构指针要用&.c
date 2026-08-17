#include"stdio.h"
struct date{
	int month;
	int day;
	int year;
};

int main()
{
	struct date today;
	today=(struct date){07,31,2014};
	struct date day;
	struct date*pDate=&today;
	printf("今天是%i-%i-%i\n",today.year,today.month,today.day);
	printf("today的地址是%p",pDate);
	return 0;
}
