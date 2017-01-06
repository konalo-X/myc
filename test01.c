/*test01.c8*/
/*测试函数*/
#include<stdio.h>

void print_();
//void print_();
int main()
{
	
	void (*p)();
	p=print_;
	p();
	return 0;
}


void print_()
{
	printf("hello world!");
	return;
}