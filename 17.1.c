#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	char fname[10];
	printf("请输入文件名: ");
	scanf("%s",fname);
	if((fp=fopen(fname,"r"))==NULL)
	{
		printf("文件无法打开!");
		exit(0);
	}
	ch=fgetc(fp);//从fp指向的文件里读取一个字符
	printf("%c",ch);
	while(ch!=EOF||!feof(fp))//如果读完,feof()返回1,没读完返回0
	{
		ch=fgetc(fp);
		if(ch==EOF)
			 printf("%c",'X');
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
