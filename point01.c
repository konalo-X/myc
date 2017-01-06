#include<stdio.h>
int main()
{
	char *p=NULL;
	char ch='Q';
	printf("打印P的地址: %d\n",&p);
	printf("打印P存储的地址:%d\n",p);
	p=&ch;
	printf("打印赋值后p的地址:%d,ch的地址:%d\n",p,&ch);
	printf("打印p指向的值:%c\n",*p);
	*p='9';
	printf("令*p='9',ch的值:%c\n",ch);
	return 0;
}
