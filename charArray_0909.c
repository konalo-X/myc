/*
 * =====================================================================================
 *
 *       Filename:  charArray_0909.c
 *
 *    Description:  字符串的操作-复制,连接,比较
 *
 *        Version:  1.0
 *        Created:  2017/01/04 21时50分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), konalo
 *   Organization:  NA
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="hello world!";
	char *p,*p2;//="NULL";
	char str2[100]="我叫MT!";
	//char * strcpy(char *,const char * ) 第一个参数代表字符型的指针变量,表示复制操作的目标字符串的地址,第二个指的是字符串常量地址
	
	p2=strcpy(p,str1);
	printf("%s,p2=\n",p);
	printf("%s\n",p2);
	//char * strcat(char *,const char *)
	char *string=NULL;
	string=strcat(p,str2);

	printf("返回值%s",string);	
	printf("p=%s",p);
	
	//int strcmp(const char *s1,const char * s2)
	if(strcmp(str2,str1)==0)
	{
		printf("str2=*p\n");
	}
	else
		printf("str2!=*p\n");
	return 0;
}


