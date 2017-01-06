#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]={"0"};
	printf("请输入字符串!<不能有空格!>\n");
		scanf("%s",str);
		getchar();
		printf("你输入的字符串内容为: %s\n长度为:%lu\n",str,strlen(str));
		//	str[0]='\0';
	printf("清空str并重新输入字符串!by for cycle!\n:");
char str1[100]={0};
	for(int i=0;i<100;i++)
	{
		scanf("%c",&str1[i]);
		if(str1[i]=='\n')
		{
			str1[i]='\0';
			break;
		}
	//	i++;
	}
	printf("the string you inout is: %s\n长度为:%lu",str1,strlen(str1));
	return 0;
}
