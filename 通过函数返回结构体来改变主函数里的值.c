#include"stdio.h"
struct point{
	int x;
	int y;
};
struct point getstruct(void);
void output(struct point p);
int main(){
	struct point y={0,0};
	y=getstruct();//这里是因为两个相同类型的结构变量是可以相互赋值的 
	output(y);
} 
struct point getstruct(void)
{
	struct point p;
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	return p;
}

void output(struct point p){
	printf("%d, %d",p.x,p.y);
}
