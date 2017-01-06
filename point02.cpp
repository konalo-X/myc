#include<iostream>
int main()
{
    int *p=NULL;
//	int *p1;//C已经不支持void * 指针,但是C++任然支持
	void *p1;
	int a=10;
	int b[]={1,2,3,4};
	p=&a;
	p1=&b;
	std::cout<<*p1<<std::endl;
//	printf("*p=%d\n*p1=%d\n",*p,*p1);
	return 0;
}
