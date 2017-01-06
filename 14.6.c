#include<stdio.h>
/*输入a和b,按从小到大顺序输出*/
void swap(int *p1,int *p2)
{
	int temp;
	if(*p1>*p2)
	{
		temp=*p1;
		*p1=*p2;
		*p2=temp;
	}

}

void main()
{
	int a,b;
	printf("请输入两个数字!\n");

	scanf("%d%d",&a,&b);
	printf("请输入后的值a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("swap 后的值a=%d,b=%d\n",a,b);


}
