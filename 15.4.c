#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

int main()
{
	int *p=NULL;
	int i=0;
	p=(int *)calloc(SIZE,sizeof(int));//从内存上分配8个int的内存
	if(p==NULL)
	{
		printf("Error in calloc!\n");
		exit(-1);
	}
	for(i=0;i<SIZE;i++)
		p[i]=i;
	for(i=0;i<SIZE;i++)
		printf("a[%d]=%d ",i,p[i]);
	printf("\n");
	free(p);
	p=NULL;
	return 0;
}
