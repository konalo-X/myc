#include<stdio.h>

struct stu
{
	int sno;
	char* name;
	char sex;
	float score;
}boy[5]={
	{2010,"李品",'M',55.3},
	{2011,"李平",'M',62.5},
	{2013,"何方",'F',92.5},
	{2013,"赵燕",'F',87},
	{2014,"王明",'M',48}
};

int main()
{
	int i,count=0;
	float ave,sum=0;
	for(i=0;i<5;i++)
	{
		sum+=boy[i].score;
		if(boy[i].score<60)
			count++;//统计不及格人数
	}
	printf("计算平均值:ave=%2f\n",sum/5);
	printf("不及格人数:%d\n",count);

	return 0;
}

