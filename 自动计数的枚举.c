#include"stdio.h"
enum color{red,yellow,green,numcolors };//不指定默认从0开始 red是0 yellow是1 
int main()//枚举这里也可以指定值red后面可以等于任意数，那yellow就是red+1 
{
	int color=-1;
	char*colornames[numcolors]={
	"red","yellow","green"};
char*colorname=NULL;
printf("输入你喜欢的颜色的代码");
scanf("%d",&color);
if(color>=0&&color<numcolors){
	colorname=colornames[color];
} else{colorname="unknown";
}
printf("你喜欢的颜色是%s",colorname);
 
 return 0;
 } 
