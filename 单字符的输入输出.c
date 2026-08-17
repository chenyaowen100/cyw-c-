#include"stdio.h"
int main(int argc,char const *argv[])
{int ch;
while((ch=getchar())!=EOF)//到这的时候程序会停下来等你输入 
{putchar(ch);//会把你输入的东西原封不动的输出 
}

printf("EOF");
return 0;
}
