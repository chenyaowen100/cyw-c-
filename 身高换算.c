#include"stdio.h"
int main()
{int foot=0;
int inch=0;
printf("请分别输入身高的英尺和英寸；");
scanf("%d%d",&foot,&inch);
printf("身高是%f米。",(foot+inch/12.0)*0.3048) ; 
return 0;
}
