#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include<stdlib.h>
//���Ա�˳��ṹ
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef  char * ElemType;
typedef   int Status;
#define OK 1
#define ERROR 0

typedef struct {
    ElemType *elem;
    int length;
    int listsize;
}SqlList;


Status InitList(SqlList *L)
{
    L->elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
    if(!L->elem)
        exit(0);
    L->length=0;
    L->listsize=LIST_INIT_SIZE;
    printf("��ʼ�����");
    return OK;
}


Status Listadd(SqlList *L,ElemType e)
{
    if(L->length==L->listsize)
    {
          //printf("�ռ�����,���·���\n");
            ElemType *newbase=(ElemType*)realloc(L->elem,(L->listsize+LISTINCREMENT)*sizeof(ElemType));
            if(!newbase)
            //    printf("�ڴ����ʧ��!\n");
            L->elem=newbase;
            L->listsize+=LISTINCREMENT;
    }
    L->elem[L->length]=e;
    L->length++;
return OK;
}


Status ListInsert(SqlList *L,int i,ElemType e)//��ʾ��i��Ԫ��ǰ����һ��Ԫ��
{
    if(i<1||i>L->length)
        return ERROR;
        if(L->length>=L->listsize)
        {
            printf("�ռ�����,���·���\n");
            ElemType *newbase=(ElemType*)realloc(L->elem,(L->listsize+LISTINCREMENT)*sizeof(ElemType));
            if(!newbase)
                printf("�ڴ����ʧ��!\n");
            L->elem=newbase;
            L->listsize+=LISTINCREMENT;
        }
        ElemType *p ;
        ElemType *q=&(L->elem[i-1]);
        for(p=&(L->elem[L->length-1]);p>=q;p--)
            *(p+1)=*p;
        *q=e;
        ++(L->length);
        printf("����ɹ�!");
        return OK;

}

void   ListDelete(SqlList *l,int i, ElemType *e)
{
    if(i<1||i>l->length)
        return ERROR;
    ElemType *p=&(l->elem[i-1]);
    *e=*p;
    //printf("%d\n",*p);
    ElemType *q=l->elem+l->length-1;
    for(p=&(l->elem[i]);p<=q;p++)
        *(p-1)=*p;

    --l->length;


}

#endif // LIST_H_INCLUDED
