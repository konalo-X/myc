#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	strcpy(str,"0");
	printf("请输入9个字符数据:\n");
	scanf("%s",str);
	printf("字符输入完毕!\n");
	printf("用户输入的字符数据是:\n");
	printf("%s\n",str);
	return 0;
}
