/* calloc 实现动态内存分配 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *str=NULL;
	str=(char *)calloc(20,sizeof(char));//开辟一个10个char大小的空间
	strcpy(str,"hello,world!");
printf("str=%s\n",str);
free(str);
str=NULL;
char str1[200];
char *pstr=strcpy(str1,"strcpy(str1(str[200]),char *)字符串直接复制到数组!");
printf("str1=%s\n",str1);
printf("strcpy返回值是:%s\n",pstr);
char str2[100]="hello,world";
strcpy(str1,str2);
printf("strcpy(str1(str1[200]),str2(str2[100]))结果为:%s\n",str1);
printf("str1 长度:%d\n",strlen(str1));
/*
 *
 *
 *
 * */
return 0;
}
