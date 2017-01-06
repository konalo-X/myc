/* malloc.c--使用malloc 分配动态内存 */
#include<stdio.h>
#include<stdlib.h>

struct stu
{
	int num;
	char *name;
	char sex;
	float score;
}*pstu;

int main()
{
	pstu=(struct stu*)malloc(sizeof(struct stu));
	pstu->num=24;
	pstu->name="KOBE";
	pstu->sex='M';
	pstu->score=90.32;
	printf("Number=%d\nName=%s\n",pstu->num,pstu->name);
	printf("Sex=%c\nScore=%.3f\n",pstu->sex,pstu->score);
	free(pstu);
	pstu=NULL;
	return 0;
}
