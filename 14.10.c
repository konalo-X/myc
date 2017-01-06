/* 直接调用函数和调用函数指针两种方法 实现输入10个数,求最大值*/
#include<stdio.h>

int main()
{
	int i,m,a[10];
	printf("请先输入是个数字:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	m=max(a);

	int (*pm)(int *);
	pm=max;
    int n=pm(a);
	printf("n=%d\n",n);
	printf("max=%d\n",m);
	return 0;
}

int max(int *p)
{
	int i,temp=*p;
	for(i=1;i<10;i++)
	{
		if(*(p+i)>temp)
			temp=*(p+i);
	}
	return temp;
}
