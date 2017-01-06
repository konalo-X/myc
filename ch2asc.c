#include <stdio.h>
#include <string>
int main()
{
	char ch='a';
	float f=10.1;
	double d=10.211212322321;
	printf("输出a 的ASCII :%d\n",ch);
	printf("f : %f\n",f);
	printf("f & ch: %1f %c\n",d ,ch);
	//三目运算符
	int a=1;
	int b=10;
	char ch1[]="a>b";
	char ch2[]="a<b";
	
	printf("%s",(a<b)?ch1:ch2);
	return 0;
}