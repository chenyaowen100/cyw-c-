#include<stdio.h>
int main()
{int a;
int n;
scanf("%d %d",&a,&n);
int sum=0;
int cnt=0;
int t=a;
while(cnt<n){
	sum=sum+a;
	a=a*10+t;
	cnt++;
}
printf("%d",sum);
return 0;
}
