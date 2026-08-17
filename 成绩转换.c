#include "stdio.h"
int main()
{printf("输入成绩");
int grade; 
scanf("%d",&grade); 
grade=grade/10;
switch(grade){
case 10:
case 9:
printf("A");
break;
case 8:
	printf("B");
	break;
	default:
		printf("不合格"); 
 	
} 
return 0;
} 
