/* realloc()  重新分配内存*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p=NULL;
	p=(int *)malloc(sizeof(int));
	*p=30;
	printf("p=%p\n",p);//输出p指向的内存地址
	printf("*p=%d\n",*p);//输出P指向的内容值
	p=(int *)realloc(p,sizeof(int));//重新分配空间
	printf("重新分配相同大小\n");
	printf("p=%p\n",p);
	printf("*p=%d\n",*p);
	printf("重新分配不同大小\n");
	p=(int *)realloc(p,4*sizeof(int));
	printf("p=%p\n",p);
	printf("p=%d\n",*p);
	printf("释放空间!\n");
	//realloc(p,0);
	free(p);
	p=NULL;
	printf("p=%p\n",p);
	return 0;

}
