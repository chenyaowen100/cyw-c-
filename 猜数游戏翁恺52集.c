#include  "stdio.h"
int main()//number是要猜的数字，n是限定次数 
{int number,n,inp;//inp是用户输入用来猜的数字 
int finished=0;//cnt是计数器 
int cnt=0;
scanf("%d %d",&number,&n);
do{
	scanf("%d",&inp);
	cnt++;
	if(inp<0){
		printf("game over\n");
	}else if(inp>number){
		printf("too big\n");
	}else if(inp<number){
		printf("too small\n");
	}else{
		if(cnt==1){
			printf("bingo\n");
		}else if(cnt<=3){
			printf("lucky guess\n");
		}else {
		printf("good guess\n");
		}finished=1;
	}
	if(cnt==n){
		if(!finished){
			printf("game over\n");
			finished=1;
		}
	}
} while(!finished); 
return 0;}
