#ifndef LIST_CHAR_H_INCLUDED
#define LIST_CHAR_H_INCLUDED

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 100
#include<string.h>

typedef  char* ElemType;
typedef   int Status;
#define OK 1
#define ERROR 0

typedef struct {
    ElemType *name;
    int length;
    int listsize;
}List;

///methods
//初始化
Status InitList(List *L)
{
    printf("初始化有序链表:");
    L->name=malloc(LIST_INIT_SIZE*sizeof(ElemType));
    L->listsize=LIST_INIT_SIZE;
    L->length=0;
    printf("\n初始化有序链表完毕!初始空间为%d字节,链表长度为%d\n",LISTINCREMENT,L->length);
    return OK;
}
//第I个位置插入一条数据
Status ListInsert(List *L,int i,ElemType e)
{
    if(!L->listsize)
    {
        printf("链表不存在,插入失败!");
        return ERROR;
    }
    if(i<1||i>L->length+1)
    {
        printf("越界,插入错误!");
        return ERROR;
    }
    if(L->length>=L->listsize)
    {
        printf("当前空间已满,重新分配!\n");
        ElemType *New_name=realloc(L->name,(L->listsize+LISTINCREMENT)*sizeof(ElemType));
        if(!New_name)printf("内存分配失败!");
        L->name=New_name;
        L->listsize+=LISTINCREMENT;
    }
    ElemType *p=&(L->name[i-1]);
    ElemType *q;
    for(q=&(L->name[L->length-1]);q>=p;q--)
    {
        *(q+1)=*q;
    }
    *p=e;
    L->length++;
    printf("插入成功!,当前链表长度为:%d\n",L->length);
    return OK;
}


 /** \brief
     *
     * \param
     * \param ///删除第i个元素,并将这个元素赋给e
     * \return
     *
     */
Status ListDelete(List *l,int i,ElemType *e)
{

    if(i<1||i>l->length) return ERROR;
    ElemType *p=&(l->name[i-1]);
    e=*p;
    for(p;p<=&(l->name[l->length-1]);p++)
    {
        *(p-1)=*p;
    }
    l->length--;
    return OK;

}

///在线性表中查找第一个满足Compare关系的元素e,并返回e的次序
int LocateElem(List L,ElemType e,Status(*compare)(ElemType,ElemType))
{
    int i=1;
    ElemType *p=L.name;

    while(i<=L.length&&!(*compare)(*p++,e))
        ++i;
    if(i<=L.length)
        return i;
    else
        return 0;
}

Status compare1 (ElemType e1,ElemType e2)
{
    if(e2==e1)
        return OK;
    else
        return ERROR;
}
void MergeList(List la,List lb,List *lc)
    {
        ElemType *pa=la.name;
        ElemType *pb=lb.name;
        lc->listsize=lc->length=la.length+lb.length;
        ElemType *pc=lc->name=(ElemType*)malloc(lc->listsize*sizeof(ElemType));
        if(!lc->name) exit(0);
        ElemType *pa_last=la.name+la.length-1;
        ElemType *pb_last=lb.name+lb.length-1;
        while(pa<=pa_last&&pb<=pb_last)
        {
            if(*pa<*pb) *pc++=*pa++;
            else *pc++=*pb++;
        }
        while(pa<=pa_last) *pc++=*pa++;
        while(pb<=pb_last) *pc++=*pb++;
    }


#endif // LIST_CHAR_H_INCLUDED
