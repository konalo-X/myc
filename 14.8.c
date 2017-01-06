/*实现输入1~7之间的数字,输出对应的星期几*/
#include<stdio.h>
char * out(int n)
{
	int index;
	index=n;

	char* name[]={
		"illegal day",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Tuesday",
		"Friday",
		"Saturday",
		"Sunday"
			};
	return ((n>7||n<1)?name[0]:name[n]);
}

int main()
{
	int n;
	printf("请输入数字:\n");
	scanf("%d",&n);
	char *p= out(n);
	printf("%s",p);
return 0;
}

