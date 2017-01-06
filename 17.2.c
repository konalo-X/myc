#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,fname[200];

	printf("输入文件名称: ");
	scanf("%s",fname);
	getchar();
	fp=fopen(fname,"w");
	if(fp==NULL)
	{
		printf("文件打开失败!");
		exit(0);
	}
//	flush();//清空缓存区
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);//将字符写入fp指向的文件
		ch=getchar();
	}
	fclose(fp);
	return 0;
}
