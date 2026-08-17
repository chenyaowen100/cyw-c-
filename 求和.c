#include"stdio.h"
int main()
{int n;
int i;
double sum=0.0;
scanf("%d",&n);
int sign=1; 
for(i=1;i<=n;i++)
{sum=sum+sign*1.0/i;
sign=-sign;
}
printf("f(%d)=%f\n",n,sum);
return 0;
} 
