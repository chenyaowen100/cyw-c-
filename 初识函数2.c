#include"stdio.h"
int isprime(int x)//21行的i相当于在我自己定义的 isprime 
{int ret=1;       //函数里面进行了x这样的运算，得到了 
	int k;       //ret的数值为1或0。 
	for(k=2;k<=x-1;k++){
		if(x%k==0){
			ret=0;
			break;
		}
	}
	return ret;//得到了ret的值后，会使调用isprime的地方 
}              //相当于变成ret的值，就像isprime（i） 
int main()     //相当于1或0 
{int m,n;
int sum=0;
int cnt=0;
int i;
scanf("%d %d",&m,&n);
if(m==1){m=2;}
for(i=m;i<=n;i++){
	if(isprime(i))//if里面非零即真，是真就执行 
	{
	sum+=i; 
	cnt++;}
}
printf("%d %d",cnt,sum);
return 0;
}
//函数的返回类型不一定是int，可能是double，用double就要
//return一个类型为double的值 
