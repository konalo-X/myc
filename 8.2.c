#include <stdio.h>
int main()
{
	int ch[10]={'0'};
	printf("输出数组中的数据,如下所示:\n");
	for(int i=0;i<10;i++)
	{
		printf("输出数组中的第%d 个元素: \n",i );
		printf("%c\n",ch[i]);
	}
	return 0;
}