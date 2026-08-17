#include "stdio.h" 
/*可以先写main函数再写sum的函数体
，但是一定要先把sum的函数头先写到
main函数的前面，并且记住这个函数头后面要跟分号*/
 void sum(int begin,int end) ; 
int main()
{sum(1,10);  
sum(20,30);
sum(35,45);
return 0;
 } 
 void sum(int begin,int end) 
{int i;                     
int total=0;                  
for(i=begin;i<=end;i++)
{total+=i;}
printf("%d到%d的和是%d\n",begin,end,total);
}
