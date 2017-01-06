/*
 * =====================================================================================
 *
 *       Filename:  charArry.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/03 21时47分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
int main()
{
	char ch[3][2]={'h','e','l','l','o','P'};
	char ch1[5];
	printf("请输入5个字符:\n");

	  for(int i=0;i<5;i++)
	{
		scanf("%c",&ch1[i]);
		getchar();
		//ch[i]=ch1;
	}
printf("输入的五个字符为:\n");
for(int i=0;i<5;i++)

{
	printf("%c",ch1[i]);
}
	printf("输出ch:\n");
	for(int i=0;i<3;i++)
	{
		for(int m=0;m<2;m++)
		printf("%c\n",ch[i][m]);
	}
	printf("\n");
	int a[6];
	printf("请输入数组元素(6个数字):\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("输出数组元素:\n");
	for(int i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

