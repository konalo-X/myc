#include<stdio.h>
//define a struct
struct stu{
	int sno;
	char name[20];
	int age;
	char sex;
	float score;
}*pStu,gril={2010,"李梅",12,'F',89.2};

int main()
{
	//struct stu Liky;
//	struct stu* pst;
	pStu=&gril;
	printf("name= %s",pStu->name);
	

	return 0;
}
