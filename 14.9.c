#include<stdio.h>
/* 函数指针 */
int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else 
		z=y;
	return z;
}
int main()
{
	int max(int,int);//声明函数
	int (*p)(int ,int);//申明一个函数指针
	int a,b,c;
	p=max;
	printf("请输入数字:\n");
	scanf("%d%d",&a,&b);/*输入数字*/
	c=(*p)(a,b);//通过函数指针调用max()函数
	printf("a=%d,b=%d,max=%d",a,b,c);



	return 0;
}
