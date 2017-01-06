/* 函数指针实例--键盘输入三角形的三个边长,输出其周长和面积*/
/* 根据需求需要输入三个小数,输出2个小数,但是return只能返回一个参数
 */

#include<stdio.h>
#include<math.h>
//声明函数
void Show(float f1,float f2,float f3,float *p1,float *p2);//f1,f2,f3 长宽高 p1 ,p2 面积周长
int  main()
{
	float a,b,c,Area,Perimeter;
	printf("\n请输入三角形三个边长:");
	scanf("%f%f%f",&a,&b,&c);
	Show(a,b,c,&Area,&Perimeter);//调用函数计算面积周长
	printf("Area=%f,Perimeter=%f",Area,Perimeter);

	return 0;
}

void Show(float f1,float f2,float f3,float *p1,float *p2)
{
	float s;
	s=(f1+f2+f3)/2;
	s=s*(s-f1)*(s-f2)*(s-f3);
	*p1=sqrt(s);
	printf("*p1=%f\n",*p1);
	*p2=f1+f2+f3;
}
