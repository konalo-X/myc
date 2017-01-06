/*
 * =====================================================================================
 *
 *       Filename:  charAryINS.c
 *
 *    Description:  strcpy,strcmp,strcat用法
 *
 *        Version:  1.0
 *        Created:  2017/01/04 22时45分32秒
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
	char ch[10]={0};
	char c='0';
	printf("请输入三个字符数据:\n");
	for(int i=0;i<6;i++)
	{
		scanf("%c",&c);
		ch[i]=c;
	}
	ch[6]='\0';
	printf("数据输入完成!\n");
	printf("用户输入的字符串为: %s",&ch);

	char string1[14]="学习C语言";
	int len=0,len1=0;
	printf("实现获取字符串长度!\n");
	len=strlen("学习C语言");
	len1=strlen(string1);
	printf("初始化数据的长度为:%d\n",len);
	printf("以初始化的字符串数组的长度为%d\n",len1);

	if(len==len1)
	{
		printf("两者长度相同!\n");
	}
	else
	{
		printf("两者长度不相同!\n");
	}

	char string2[50];
	printf("正对字符串数组进行复制!\n");
	strcpy(string2,"努力学习C语言,做个好的程序猿!");
	printf("字符串数组已经完成复制!\n");
	printf("已经初始化的数据长度为:\n");
	int len2=strlen("努力学习C语言,做个好的程序猿!");
	printf("%d\n",len2);
	printf("复制后,字符串数组的数据内容是:%s\n",string2);
	printf("实现字符串复制功能!\n");

	char str[30],*string7;
	char str1[30];
	printf("请用户输入一个长度小于10的字符串!\n");
	scanf("%s",str);
	string7=strcpy(str1,str);
	printf("目标字符串的数据内容是:%s\n",str1);
	printf("复制函数返回的内容是:%s\n",string7);
	
	printf("实现字符串连接操作!\n");

	char str2[60]="嵌入书系统还可以";
	char str3[30]="使用C语言进行编程";
	char * string8=NULL;	//定义并初始化
	printf("源字符串1:%s\n 源字符串2: %s\n",str2,str3);
	string8=strcat(str2,str3);
	printf("连接后的字符串为: %s\t%s\n",string8,str2);
	
	printf("实现字符串比较!\n");
	char str4[40]="学习C语言";
	char str5[20]="学习C++";
	int i3=0;
	printf("比较后的结果为:\n");
	i3=strcmp(str4,str5);
	if(i3<0)
	{
		printf("str4<str5\n");
	}
	if(i3==0)
	{
		printf("str4=str5\n");
	}
	else
		printf("str4>str5\n");

	return 0;
}


