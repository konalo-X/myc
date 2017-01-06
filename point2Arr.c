#include<stdio.h>

int main()
{
	int a[10][2]={0};
	a[3][1]=21;
	int *p;
	p=a[0];
//	for(int i=0;i<20;i++)
//		*(p+i)=i;
	for(int i=0;i<20;i++)
		printf("%d\n",*(p+i));
	// a[i][j]=p+列数*i+j
	printf("%d",*(p+2*3+1));
	return 0 ;
}
