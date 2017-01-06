/*
 * =====================================================================================
 *
 *       Filename:  charArray_0906.c
 *
 *    Description:  在运行时初始化字符串数组
 *
 *        Version:  1.0
 *        Created:  2017/01/04 20时01分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  NA
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char string[40];
	char str[100];
	printf("请输入一句话:<q to quit>\n");
	int i=0;
	while(1)
	{
		
		scanf("%c",&str[i]);
		//getchar();
		
		if(str[i]=='q'){
			str[i]='\0';
			break;
		}
		//	break;
		i++;

	}
	printf("正在对字符串数组进行数据复制.....\n.");
	

	strcpy(string,str);
	printf("字符串数组数据复制已经完成!\n");
	printf("已经初始化后的数据长度为:%d\n",strlen(string));
	printf("赋值后,字符串数组数据为:\n");
	for(int a=0;a<strlen(string);a++)
	{
		printf("%c",string[a]);
	}
	printf("\n");
	return 0;
	
}
	
