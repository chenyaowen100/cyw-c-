#include"stdio.h"
int main()
{double sum=0.0;
int zi=2;
int mu=1;
int n;
int cnt=0;
int t;
scanf("%d",&n);
while(cnt<n){
	sum+=zi*1.0/mu;// 其实这个1.0可以不乘 
	t=zi;//只需要把zi，mu，t都用double定义就可以了 
	zi=zi+mu;//
	mu=t;//
	cnt++;//
} 
printf("%.2f",sum);
return 0;} 
