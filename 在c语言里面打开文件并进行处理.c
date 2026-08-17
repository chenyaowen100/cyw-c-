#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("C:/Users/cheny/Desktop/cyw的c语言编程学习经历/%n的使用.c", "r");
    if ( fp ) {
        int num;
        fscanf(fp, "%d", &num);//这样就从另外一个文件读到了num的值 
        printf("%d", num);
        fclose(fp);//关闭刚才打开的文件 
    } else {
        printf("无法打开文件");
    }
    return 0;
}

