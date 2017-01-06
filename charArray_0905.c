/*
 * =====================================================================================
 *
 *       Filename:  charArray_0905.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/04 19时51分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>//包含字符串处理头文件
int main()
{
	char string[15]={"学习C语言"};
	int len=0,len1=0;
	len=strlen("学习C语言!");
	len1=strlen(string);
	printf("初始化数据长度为:%d\n",len1);
	printf("已经初始化字符串长度为:%d\n",len);
	
	if(len==len1)
	{
		printf("两个字符串长度相同!\n");
	}
	else
	{
		printf("两个字符串长度不相同!\n");
	}	

	return 0;

}


