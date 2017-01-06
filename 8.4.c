#include<stdio.h>
int main()
{
	int a[2][2]={1};
	int j1=0;

	printf("指定的二维数组已经初始化完毕!\n");
	printf("下面将输出数组中的数据:\n");

	for(int m=0;m<2;m++)
	{
		for(int n=0;n<2;n++)
		{
		printf("%d",a[m][n]);
		printf(" ");
		}
	}
	return 0;
}