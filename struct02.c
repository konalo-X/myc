#include<stdio.h>

int  main()
{
	struct student
	{
		int sno;//学号
		char sname[20];//姓名
		char sex;//性别
		int sage;//年龄
		float score;//成绩
	}student1,student2={2011,"黎明",'M',19,85};
//student2=student1;
printf("输出学生信息:\n");
printf("Number=%d\nName=%s\nsex=%c\nAge=%d\nScore=%f\n",student2.sno,student2.sname,student2.sex,student2.sage,student2.score);
printf("开始请初始化student1:\n");
printf("请输入学号:\n");
scanf("%d",&student1.sno);
printf("sname please:\n");
scanf("%s",&student1.sname);
getchar();
printf("sex please:<M or F>\n");
scanf("%c",&student1.sex);
printf("age please:\n");
scanf("%d",&student1.sage);
printf("Score please:\n");
scanf("%f",&student1.score);

printf("Done");
printf("Number=%d\nName=%s\nsex=%c\nAge=%d\nScore=%f\n",student1.sno,student1.sname,student1.sex,student1.sage,student1.score);
return 0;
}
