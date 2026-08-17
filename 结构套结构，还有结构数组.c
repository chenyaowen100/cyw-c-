#include"stdio.h"
struct point{
	int x;
	int y;
}; 
struct rectangle{
	struct point p1;
	struct point p2;
};
void printrect(struct rectangle r)
{
	printf("<%d, %d> to <%d, %d>\n",r.p1.x,  r.p1.y,  r.p2.x,  r.p2.y);
}
int main(){
	int i;
	struct rectangle rects[2]={
		{{1,2},{3,4}},//一个矩形的p1是（1，2），p2是（3，4） 
		{{5,6},{7,8}}//另一个矩形的p1是（5，6），p2是（7，8） 
	};//2 rectangles
	
	for(i=0;i<2;i++){
		printrect(rects[i]);
	}
	
	return 0;
}
