#include<stdio.h>
#include<stdlib.h>

int main(int argc,char * argv[])
{
	int count=0;
	int *array;
	array=(int *)malloc(10*sizeof(int));
	if(array==NULL)
	{
		printf("创建失败!\n");
		exit(1);
	}
	else
	{
		printf("创建成功!\n");
	}
	printf("请输入10个元素:\n");
	
	while(count<11){
	//	int a=0;
	scanf("%d",&array[count++]);//当做数组使用
	//	array[count++]=a;
	}
	for(int i=0;i<11;i++)
	{
		printf("输出元素:\n%d\n",array[i]);
	}
free(array);
printf("NULL=%d",NULL);
	return 0;
}
