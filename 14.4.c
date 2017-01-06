#include<stdio.h>
//使用结构体作为函数实参

struct student
{
	long num;
	char name[10];
	float score[3];
}stu={24,"kobe",42,3,65};

void Mul(float *pf)
{
	*pf*=2;
}


void main()
{
	void show(struct student*);//函数声明
	show(&stu);
	float f=8.9;
	Mul(&f);
	printf("%f\n",f);
}
void show(struct student*p)
{
	printf("%d%s\n",p->num,p->name);/*使用指针访问变量各成员*/
}

