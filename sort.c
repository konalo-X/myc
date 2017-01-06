#include<stdio.h>
int main()
{
	int a[10]={11,3,45,232,65,4,63,66,1,5};
	for(int i=0;i<10;i++)
	{
	//	printf("\n");
		printf("%5d",a[i]);		
	//	printf("\n");
	}
	//排序
	int tmp;
	for(int i=0;i<10;i++)
	{

		for(int j=0;j<10-i;j++ )
		if(a[j]>a[j+1])
		{
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
		}
	}
	printf("输出排序后的数组:\n");
	for(int i=0;i<10;i++)
	{
	//	printf("\n");
		printf("%5d",a[i]);
	//	printf("\n");
	}
	return 0;
}
