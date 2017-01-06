/*calloc 与malloc 都是在堆内存开辟空间,区别calloc 开辟后的空间全部初始化为0
 * malloc 未初始化
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,*p,i,j,m;
printf("本程序可对任意个整数排序:\n");
printf("请输入整数的总个数:");
scanf("%d",&n);
p=(int *)calloc(n,sizeof(int));
if(p==0)
{
	printf("分配内存失败!\n");
	exit(1);
}
printf("请输入这些整数:\n");
for(i=0;i<n;i++)
{
	scanf("%d",p+i);
}
for(i=1;i<n;i++)/*利用冒泡排序*/
{
	for(j=0;j<n-i;j++)
		if(*(p+j)>*(p+j+1))
		{
			m=*(p+j);
			*(p+j)=*(p+j+1);
			*(p+j+1)=m;
		}
}
printf("将这些数字从小到大排列输出为:\n");
for(i=0;i<n;i++)
{
	if(i%5==0)
		printf("\n");
	printf("%11d",*(p+i));
}
printf("\n");
free(p);
return 0;
}
