#include "stdio.h"
int main()
{int x,one,two,five;
//x是要凑的钱(元）1 2 5代表硬币多少角 
scanf("%d",&x);
for(one=0;one<=x*10;one++)
{for(two=0;two<=x*10/2;two++)
{for(five=0;five<=x*10/5;five++)
{if(one+two*2+five*5==x*10)
{printf("可以用%d个1角加%d个2角加%d个五角得到%d元\n"
,one,two,five,x);
goto out;
}
}
}
}out:
	return 0;
}
