/*
 * =====================================================================================
 *
 *       Filename:  charArray_0902.c
 *
 *    Description:  字符数组和字符串
 *
 *        Version:  1.0
 *        Created:  2017/01/04 19时04分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  NA
 *
 * =====================================================================================
 */

#include<stdio.h>
int main()
{
	char ch[10]={'w','e','r','rt'};
	char str[10]={'w','e','r','rt','\0'};//Warning  多字符rt
	printf("%s\n",ch);
	printf("%s\n",str);
	return 0;
}


