#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=0;
    printf("%dty%n\n",12345, &num);
    printf("%d", num);//按理说这里应该输出7，因为在运行到%n的时候已经输出了七个字符  

    return 0;
}

