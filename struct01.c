#include<stdio.h>
int main()
{

	struct student
	{
		char name[20];
		int age;
		int score;
		
	}Lily,Kas;
	printf("size of student=%d ",sizeof(struct student));
//struct student Lily;
printf("sizeof(Lily) is:%d\n",sizeof(Lily));
struct student * pst;
pst=(struct student *)malloc(sizeof(struct student));
printf("psr address=%lu\n",pst);
	return 0;
}
