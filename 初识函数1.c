#include "stdio.h" 
void sum(int begin,int end)// 这一行叫函数头 
{int i;                    //void是返回类型，sum是函数名 
int total=0;                 //这个大括号的内容叫函数体 
for(i=begin;i<=end;i++)
{total+=i;}
printf("%d到%d的和是%d\n",begin,end,total);
}
/*void的意思是不会返回一个值到引用sum函数的地方
，而会在引用sum函数的地方把sum里面的步骤都做一遍 */ 
int main()
{sum(1,10);//1代表第二行的begin，10是end  
sum(20,30);
sum(35,45);
return 0;
 } 
 //函数里面还可以套函数，就像
 //sum（1，sum（35，45））； 
