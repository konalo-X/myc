#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define OK  1
#define ERROR 0
#define LIST_INT_SIZE 100
#define LISTINCREMENT 10  //���Ա�Ŀռ��������
#define OVERFLOW 0
typedef int Status;

typedef struct node
{
        int value;
        struct node *next;
}node;

typedef struct List{

node *elem;//������ʼ��ַ
int length;//��¼������
int listsize;//�����ڴ�ռ�

}List;


//�����������


Status InitList(List *);//���������

//Status DestoryList(List *);//��������
Status DestoryList(List *L)
{

    while(L->elem->next)


}

//ClearList(List *);//��������Ϊ��

//int ListEmpty(List);//�ж��Ƿ�Ϊ��

//int ListLength(List);//����Ԫ�ظ���

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
