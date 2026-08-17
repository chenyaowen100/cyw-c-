#include"stdio.h"
#include"stdlib.h"//有了这行才能用free和malloc 
int main()
{int number;
int *a;
int i;
scanf("%d",number);
a=(int*)malloc(number*sizeof(int));//malloc作用是借一块内存 
for(i=0;i<number;i++){
	scanf("%d",&a[i]);
}
for(i=number-1;i>=0;i--)
{printf("%d",a[i]);
}


free(a);//用了malloc就要用free把借的内存还回去 
return 0;//如果a++了就不能free了，a不变才能用 
 } 
//先定义了一个指针，然后用malloc申请到了一块内存，将这块内存
//的地址转化为int*类型（因为正常malloc得到的是void*类型），
//然后相当于得到了这个数组的大小，相当于得到了数组单元的数量，
//然后就可以把指针当数组一样用 
