#include "stdio.h"
int main()
{int x;
int n=0;
printf("请输入数字，我来帮您判断这个数字有多少位"); 
scanf("%d",&x);
n=n+1;
x=x/10;
while(x>0)
{n=n+1;
x=x/10;
}
printf("这个数字的位数是%d",n);
return 0;
} 
