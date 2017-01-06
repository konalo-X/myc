#include<stdio.h>
 char eatspace(){
	char ch=getchar();
	while(ch==' '|ch=='\n')
	{
		ch=getchar();
//		if(ch=='q')
//			break;
		if(ch!=' '&&ch!='\n')
			return ch;
	
		
	}
	return ch;
}
int main()
{
	char ch[1000]={0};
	printf("请输入一段话:\n");
	//eatspace();
	int i=0;
	while(1)
	{
		ch[i]=eatspace();
		//i++;
		if(i==20|ch[i]=='q')
			break;
        i++;		
	}
	printf("ch=%s\n",ch);
	return 0;
}
