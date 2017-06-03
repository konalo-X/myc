#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define OK  1
#define ERROR 0
#define LIST_INT_SIZE 100
#define LISTINCREMENT 10  //线性表的空间分配增量
#define OVERFLOW 0
typedef int Status;

typedef struct node
{
        int value;
        struct node *next;
}node;

typedef struct List{

node *elem;//链表起始地址
int length;//记录链表长度
int listsize;//链表内存空间

}List;


//链表操作方法


Status InitList(List *);//构造空链表

//Status DestoryList(List *);//销毁链表
Status DestoryList(List *L)
{

    while(L->elem->next)


}

//ClearList(List *);//重置链表为空

//int ListEmpty(List);//判断是否为空

//int ListLength(List);//返回元素个数

//void GetElem(List,int,e* );//

//int LocateElem(List,e ,compare);

//Status PriorElem(List,e,e*);

//NextElem(List,e,e*);
//ListInsert(List *,int,e);

//ListDelete(List *,int,e*);

//ListTraverse(List,visit);

//compare();

//visit();

#endif // LIST_H_INCLUDED
