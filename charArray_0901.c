/*
 * =====================================================================================
 *
 *       Filename:  charArray_0901.c
 *
 *    Description:  a char array in c
 *
 *        Version:  1.0
 *        Created:  2017/01/04 18时47分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), konalo
 *   Organization:  NA
 *
 * =====================================================================================
 */
#include<stdio.h>
int main()
{
	char ch[20]={0};											//定义并初始化数组
	char c='0';

	printf("请输入9个字符数据:\n");

	for(int i=0;i<18;i++)
	{
		scanf("%c",&c);
		getchar();
		ch[i]=c;												//将数据赋予数组	
	}
	ch[19]='\0';//为数组最后一位添加结束符,使其变成字符串
	printf("数据输入完成\n");
	printf("用户输入的数据位:\n");
	printf("%s",&ch);
	return 0;
}


