/*
 * =====================================================================================
 *
 *       Filename:  charArray_0908.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/04 21时40分42秒
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
	char str[10];
	strcpy(str,"0");

	printf("请输入字符串!\n");

	for(int i=0;i<9;i++)
		scanf("%c",&str[i]);
	printf("字符串输入完毕!\n你输入的是:\n");
	
	printf("%s",str);
	return 0;

}


