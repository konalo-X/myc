//单向链表
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int index;//记录项次(即第几项)
	float data;//存储值
	struct node* next;//指向下一个节点的指针
};

/* 链表的创建 */
struct node* CreateList(int n,struct node* head)
{

	int i=1;
 //   struct node* head=(struct node*)malloc(sizeof(struct node));
		struct node* temp=NULL;
		temp=head;
	while(i<=n)
	{
		struct node* newNode=(struct node*)malloc(sizeof(struct node));
		newNode->next=NULL;
		newNode->index=i++;
		printf("请输入分数:\n");
		scanf("%f",&newNode->data);
		temp->next=newNode;
		temp=newNode;

	}		
	return head;		
}
/* 链表的遍历*/
void printList(struct node* head)
{
	struct node *temp=head->next;
	while(temp!=NULL)
	{
		printf("编号为%d的学生成绩为: %.2f\n",temp->index,temp->data);
		temp=temp->next;
	}
}

/* 链表的插入 */
void Insert(struct node *head)
{
	struct node * newNode=(struct node*)malloc(sizeof(struct node));
	int index=0;
	int data=0;
	printf("输入插入的学生编号:\n");
	scanf("%d",&index);
	printf("要插入的数据:\n");
	scanf("%d",&data);
	newNode->index=index;
	newNode->data=data;
    struct node*p ;
	p=head;
	printf("请输入要插入的位置:\n");
	scanf("%d",&index);
	while(index>1&&p!=NULL)
	{
		p=p->next;
		index--;
	}
	//p->next=newNode;应该画图看更清楚
	newNode->next=p->next;
	p->next=newNode;
	
}

/* 链表的删除*/
void del(struct node* head)
{
	int index=0;
	printf("请输入要删除的结点编号:\n");
	scanf("%d",&index);
	struct node* p=head;//要删除的结点前一结点
	struct node* temp=NULL;//保存要删除的结点
	while(index>1&&p!=NULL)
	{
		p=p->next;
		index--;
	}
	temp=p->next;
	p->next=temp->next;
	free(temp);

}
int main()
{
	//struct node* head;
	//head=((struct node*)malloc(sizeof(struct node)));//为头结点分配空间
//	head->index=0;

//head->next=NULL;
	struct node* head=(struct node*)malloc(sizeof(struct node));

	int i=0;
	printf("请输入你想创建的节点数:\n");
	scanf("%d",&i);
	printList(CreateList(i,head));
	Insert(head);
	printList(head);
	del(head);
	printList(head);
	//for(int i=0;i<6;i++)
	//
	//
	//{

	//	printf("第%d个结点数据data=%f\n",head->index,head->data);
	//	head=head->next;
	//}
	return 0;
}
