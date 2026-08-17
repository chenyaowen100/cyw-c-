#include "stdio.h"
int main()
{int x=0;
int f=0;
printf("请输入x的值"); 
scanf("%d",&x);
if(x<0){f=-1;}
else if(x==0){f=0;}
else{f=2*x;}
printf("f的值是%d",f);
}
