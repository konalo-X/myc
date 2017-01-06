#include<stdio.h>
#define NUM 3
struct stu
{
	char name[20];
	char phone[10];
};

int main()
{
	struct stu people[NUM];
	int i;
	for(i=0;i<NUM;i++)
	{
		printf("请输入学生姓名:\n");
		gets(people[i].name);
		printf("请输入学生手机号:\n");
		gets(people[i].phone);
	}
	printf("name\t\tphone\n\n");
	for(i=0;i<NUM;i++)
		printf("%s\t\t%s\n",people[i].name,people[i].phone);
	return 0;
}
