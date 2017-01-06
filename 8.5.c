#include<stdio.h>
int main()
{
	float a[10]={0};
	int i=0;
	float j=0;
	printf("请用户输入10个数字组成数组:\n");
	while(1)
	{

		if(i<10)
		{
			printf("请输入第 %d 个元素:",i+1);
			scanf("%f",&a[i]);
			i++;
		
		}
		else
		{
			printf("已经输了10个数字了");
			break;
		}
		
	}
	printf("请输入你要查找的数字:\n");
	scanf("%f",&j);

	for(int b=0;b<10;b++)
	{
		if(a[b]==j)
		{
			printf("你查找的数字在数组中的下标为%d\n",b);

		}
		else
			printf("正在查找,请稍后......!\n");

	}

	return 0;


}
