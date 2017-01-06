#include <stdio.h>

int main()
{
	int a[2][4]={1,2,3,4,5,6,7,8};
	int j1=0;
	printf("二维数组已经初始化完毕!\n");
	printf("下面将输出数组中的数据:\n");
	for(int m=0;m<2;m++)
	{
		for(int n=0;n<4;n++)
		{
		printf("%d",a[m][n]);
		printf(" ");
		j1++;
		//if(j1%2==0)
		if(j1==2|j1==4|j1==6)
		printf("\n");
		}
	}

	printf("\n");

	return 0;



}