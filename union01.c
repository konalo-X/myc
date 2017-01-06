#include<stdio.h>
struct time
{
	int year;
	int month;
	int day;
};
union dig
{
	struct time data;
};
int main()
{
	union date
	{
		int year;
	    char month;	
	}date1;
	date1.year=1962;
	date1.month='7';
	//printf("%d",sizeof(date1));
	printf("year=%d\n,month=%c\n",date1.year,date1.month);
	printf("year address=%d\nmonth address=%d\n",&date1.year,&date1.month);


	/*
	 *实现对学生出生年月的统计
	 * */
	union dig unit;
	printf("Enter year:\n");
	scanf("%d",&unit.data.year);
	printf("Enter month:\n");
	scanf("%d",&unit.data.month);
	printf("Enter day:\n");
	scanf("%d",&unit.data.day);

	printf("输出date: year=%d\nnonth=%d\nday=%d\n",unit.data.year,unit.data.month,unit.data.day);
	return 0;
}
