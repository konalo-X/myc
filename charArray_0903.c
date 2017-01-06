/*
 * =====================================================================================
 *
 *       Filename:  charArray_0903.c
 *
 *    Description:  使用一个字符串对字符数组进行初始化
 *
 *        Version:  1.0
 *        Created:  2017/01/04 19时10分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (konalo), 
 *   Organization:  NA
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[21]={"学习C语言编程!"};
	printf("已经将字符串存储到数组中,并且将输出进行测试:\n");

	printf("%s\n",str);
	printf("输出字符串长度:%lu\n",strlen("汉"));// Mac Os 中一个汉字长度为3字节
	printf("一个汉字占%d个字节 in Mac OS",sizeof("汉"));
	return 0;
}


