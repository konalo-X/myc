/* 设计函数,实现输出数组反序 */
#include<stdio.h>

void Inverse(int *p,int len);

int main()
{
	int n,a[100];
	//printf("请输入数组个数:\n");
	//scanf("%d",&n);
	printf("创建数组并输出!\n");
	for(int i=0;i<100;i++)
	{
		a[i]=i;
		printf("%d\n",a[i]);
	};
	Inverse(a,100);
	for(int i=0;i<100;i++)
		printf("%d\n",a[i]);
return 0;
}

void Inverse(int *p,int len)
{
	for(int i=0;i<len/2;i++)
	{
		int t=0;
		t=*(p+i);
	    *(p+i)=*(p+len-i-1);
		*(p+len-i-1)=t;
	}
	//	*(p+i)=*(p+len-1);

}
