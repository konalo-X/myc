#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[80],*Message;
	puts("please input string: ");
	gets(str);//输入一个字符串到str数组中

	Message=(char *)realloc(NULL,strlen(str)+1);//分配字符串数组+1字节大小的内存块,+1 用来保存 '\0'(字符串结束符)
	strcpy(Message,str);
	puts(Message);

	puts("input another string: ");
	gets(str);
	Message=(char *)realloc(Message,strlen(str)+strlen(Message)+1);
	strcat(Message,str);
	puts(Message);
	
	free(Message);
	Message=NULL;
	return 0;
}
