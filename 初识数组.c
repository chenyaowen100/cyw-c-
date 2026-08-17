#include"stdio.h"
int main()
{int x;
double sum=0;
int count=0;
int number[100];//定义数组 （这是一个100个int的数组） 
scanf("%d",&x);
while(x!=-1)//数组数数从零开始数 
{number[count]=x;//对数组中的元素赋值(让number当中的
sum=sum+x;       // 第count那个位置上的元素等于了x ） 
count=count+1;
scanf("%d",&x);
}
if(count>0)
{
printf("%f\n",sum/count);
int i;
	for(i=0;i<count;i++){//整个for循环在遍历数组 
	   if(number[i]>sum/count)//使用数组中的元素 
	   {         //拿number中的第i个元素来做判断 
	   	printf("%d\n",number[i]);//
	   }
	}
}
return 0;}
