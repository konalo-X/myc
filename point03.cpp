#include<iostream>
//#include<stdio.h>
int main()
{
	int ch[6]={0,1,2,3,4,5};
	int *p=NULL;

//	printf("请输入6个整形数据:\n");
	/*for(int i=0;i<6;i++)
	{
	//	printf("请输入第%d个元素: ",i+1);
		std::cout<<"请输入第"<<i+1<<"个元素"<<std::endl;
		//scanf("%d",&ch[i]);
		std::cin>>ch[i];
	}*/
	p=ch;
	//printf("输出Ch元素:\n");
	std::cout<<"输出ch的所有元素:\n";

	//int i=0;
	for(auto i:ch)
	{
		std::cout<<*p++<<" ";
	//printf("%d ",ch[i]);
	}
	return 0;
}
