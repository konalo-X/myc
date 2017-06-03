#ifndef LIST_UNSORTED_H_INCLUDED
#define LIST_UNSORTED_H_INCLUDED
/**
**    链式线性表的实现
**/
#include<stdio.h>
#include<stdlib.h>

typedef  int ElemType;
typedef   int Status;
#define OK 1
#define ERROR 0


typedef struct Node{
    ElemType data;
    struct Node *next;
}Node;

typedef Node* LinkList;



///定义一个 LinkList L ---L为链表的头指针,指向第一个节点
///method getElem 的实现取出链表的第i个元素,赋值的传递进来的e

Status GetElem(LinkList L,int i,ElemType *e)
{
    //L为带头结点的单链表的指针
    //当第i个元素存在时,其赋值给e并返回OK,否则返回ERROR
    int k=1;
    LinkList p;
    p=L->next;   //p指向第一个节点(头结点的下一个节点)
    while(k<i&&p)   //顺时针向后寻找,知道p指向i,或者p为空
    {
        p=p->next;
        ++k;
    }

    if(!p||k>i)
        return ERROR;
    //int a=0;
    *e=p->data;


    return OK;

}




///在带头结点的链表中第i个位置插入节点
///1=<i<=l.length
Status InsertElem(LinkList *L,int i,ElemType e)
{
    LinkList p;
    p=(*L);      ///将P设为头结点,此时,p指向头节点(第0个节点)
    int j;
    j=0;
    while(p&&j<i-1)
    {
        p=p->next;//当j=i-2;p->i-1节点(i的前一个节点)

        ++j;
    }

    if(!p||j>i-1)       ///当i=0,j>i-1
        return ERROR;

        LinkList newnode=(LinkList)malloc(sizeof(Node));

        newnode->data=e;
        newnode->next=p->next;
        p->next=newnode;

        printf("----------e=%d",newnode->data);

        return OK;

}

/* 正确版本
//在带头结点的单链表L中删除第i个元素,并由e返回其值

Status ListDelete(LinkList *L,int i,ElemType *e)
{
    LinkList p,q;//用p指向要删除的元素,q指向p的前一个元素
    int j=0;
    p=(*L);
    while(p->next&&j<i-1)    //q->next :第一个节点  ----寻找i的前驱
    {
        p=p->next;              //q指向i的前驱
       // printf("1--%d\n",p->data);
        j++;
    }
    if(!(p->next)||j>i-1)
        return ERROR;

    q=p->next;                  //p为第i个元素
    p->next=q->next;
    *e=(q->data);
    //printf("2--%d\n",p->data);
    free(q);

    return OK;
}
*/
//在带头结点的单链表L中删除第i个元素,并由e返回其值

Status ListDelete(LinkList *L,int i,ElemType *e)
{
    LinkList p,q;//用p指向要删除的元素,q指向p的前一个元素
    int k=0;
    q=(*L);
    while(q->next&&k<i-1)    //q->next :第一个节点  ----寻找i的前驱
    {
        q=q->next;              //q指向i的前驱
        k++;
    }
    if(!(q->next)||k>i-1)
        return ERROR;
    p=q->next;                  //p为第i个元素

    *e=(p->data);
    q->next=p->next;
    free(p);
    return OK;
}




///创建n个元素,从表头开始插入有头结点的链表

void ListHeadInsert(LinkList *L,int n)
{
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL;           //L为头指针,指向头结点
    LinkList p;
    int i;
    //srand(time(0));
    for(i=0;i<n;i++)
    {
        p=(LinkList)malloc(sizeof(Node));//创建一个节点p
        printf("input :");
        int a;
        scanf("%d",&a);
        p->data=a;

        p->next=(*L)->next;        //L->next ==null(起始);
        (*L)->next=p;
    }


}


///创建一个有头结点的链表并初始化

Status Init_LinkList(LinkList *L)
{

    *L=(LinkList)malloc(sizeof(Node));

    if(!(*L))
        return ERROR;

    (*L)->next=NULL;
    return OK;

}

///创建一个添加节点的函数

Status LinkList_add_node(LinkList *L)
{



   LinkList temp;
   temp=*L;
   while(temp->next)
   {
       temp=temp->next;
   }
   LinkList p=(LinkList)malloc(sizeof(Node));
    printf("input data:");
    scanf("%d",&(p->data));
   temp->next=p;
   p->next=NULL;

   return OK;

}


void viewLinkList(LinkList L)
{
    LinkList p;//=(LinkList)malloc(sizeof(Node));
    p=L->next;
    //int k=0;
    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;

    }

    ///将两个**有序链表**La,Lb合并成一个有序链表Lc
    /*  */

    void MergeList(LinkList *La,LinkList *Lb,LinkList *Lc)
    {
    ///已知单链线性表La和Lb元素按值非递减排列----从小到大排列
    //合并的Lc也按值非递减排列
    LinkList pa=(*La)->next;//pa 指向第一个节点
    LinkList pb=(*Lb)->next;//pb 指向第一个节点
    LinkList pc;
    (*Lc)=pc=(*La);             //用La的头结点作为Lc的头结点?????????????????????????????
    while(pa&&pb)//从第一个节点开始遍历链表,直到pa或者pb遍历完成
    {
        if(pa->data<=pb->data)
        {
            pc->next=pa;
            pc=pa;          //pc=pc->next;(我的写法)
            pa=pa->next;
        }
        else
            {
                pc->next=pb;
                pc=pb;//pc=pc->next;
                pb=pb->next;
            }
    }

    //while(pa){pc=pa;pa=pa->next}
    pc->next=pa?pa:pb;    //若pa为Null,把pc剩下的部分直接赋给pc->next后面
}







#endif // LIST_UNSORTED_H_INCLUDED
