/*
 * =====================================================================================
 *
 *       Filename:  testcharArr.c
 *
 *    Description:  test strcat/strcpy/strcpm
 *
 *        Version:  1.0
 *        Created:  2017/01/05 10时04分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char *p1="hello!";
	char *p2={" world"};
	char *p3={"0"};
	printf("连接操作!\n");
	//strcat(p1,p2);
	char str[50]=",konalo,good morning!";
	p3=strcat(str,p1);
	printf("连接后的字符串str= %s\n",str);
	printf("返回值:char *p3 =%s\n",p3);

	printf("字符串复制操作!\n");
	char str2[30]={"123helo"};
	p2=strcpy(str2,p1);
	printf("复制后的字符串str2= %s\n返回值*p2= %s\n",str2,p2);
	
	printf("字符串比较操作\n");
	int i=0;
	i=strcmp(p2,p3);
	if(i==0)
	{
		printf("字符串相等!\n");
	}
	else
	{
		printf("字符串不相等!\n");
	}



	return 0;
}

