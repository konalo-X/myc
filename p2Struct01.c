#include<stdio.h>
	
struct data
{
	int day;
	int month;
	int year;
};
struct stu
{
	char name[20];
	long num;
	struct data birthday;//结构体做为另一个结构体的成员
};

int main()
{
	struct stu *stud;
	//stud=NULL
	stud=(struct stu*) malloc(sizeof(struct stu));//为指针变量开辟一段内存,并将地址赋予
	printf("please input name,number,year,month,day.\n");
	scanf("%s",stud->name);
	scanf("%d",&stud->num);
	scanf("%d",&stud->birthday.year);
	scanf("%d",&stud->birthday.month);
	scanf("%d",&stud->birthday.day);
	printf("输出学生基本信息!\n");
	printf("姓名:%s\n学号:%d\n",stud->name,stud->num);
	printf("生日:%d-%d-%d\n",stud->birthday.year,stud->birthday.month,stud->birthday.day);
	
	printf("Done.\n");
	
	return 0;	
}
