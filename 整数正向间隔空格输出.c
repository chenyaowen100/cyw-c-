#include"stdio.h"
int main()
{int x=0;
int t=0;
scanf("%d",&x);
do{t=t*10+x%10;
x=x/10;
}while(x>0);
printf("%d\n",t);
do{int d=t%10;
printf("%d",d);
if(t>=10){
printf(" ");}
t=t/10;
}while(t>0); 
return 0;
}
