#include"stdio.h"
struct point{
	int x;
	int y;
}; 
struct point*getstruct(struct point*);
void output(struct point);
void print(const struct point*p);
int main(){
	struct point A={0,0};
	getstruct(&A);
	output(A);
	output(*getstruct(&A));
	print(getstruct(&A));
	*getstruct(&A)=(struct point){1,2};
	return 0; 
}
struct point*getstruct(struct point*p){
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("%d,%d\n",p->x,p->y);//p->x=10相当于（*p）.x=10；
	//p是一个指针，p->x其实可以说是x的值，并且修改它可以改变x 
	return p; 
} 
void output(struct point p){
	printf("%d,%d\n",p.x,p.y);
}
void print(const struct point*p){
	printf("%d,%d",p->x,p->y);
}
