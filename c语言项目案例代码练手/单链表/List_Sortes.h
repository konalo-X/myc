

/*
    一个顺序链表
*
*/


#include<stdlib.h>
#include<stdio.h>

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 100
#define OK 1
#define ERROR 0

typedef int Status ;
typedef int ElemType;


typedef struct
{
	ElemType *elem;
	int length;
	int listsize;
}List;

//methods
Status InitList(List *l)
{
	l->elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if(!l->elem)
		return ERROR;
		else
            printf("ok\n");
	l->length=0;
	l->listsize=LIST_INIT_SIZE;
	return OK;
}

Status ListEmpty(List l)
{
	if(l.length==0)
		return OK;
	else
		return ERROR;
}

void ClearList(List*l)
{
	if(l->length==0)
		return ;
	memset(l->elem,0,l->length);///void *memset(void *s,int c,size_t n)  总的作用：将已开辟内存空间 s 的首 n 个字节的值设为值 c。
	return ;
}
Status GetElem(List*l,int i,ElemType* e)
{
	if(i<1||i>l->length||l->length==0)
		return ERROR;
	*e=l->elem[i-1];
	return OK;
}
Status LocateElem(List l,ElemType e)
{
	if(l.length==0)
		return ERROR;
	int i=0;
	while(i<(l.length))
	{
		if(e==l.elem[i])
			return OK;
	}
	return ERROR;
}
Status ListInsert(List*l,int i ,ElemType e)
{
	int k;
	//if(l->listsize==l->length)
	//	return ERROR;//¤w?
	if(l->listsize==0||i<1||i>l->length+1)
		return ERROR;
	if(i<=l->length)
	for(k=l->length-1;k>=i-1;k--)
	{
		if(l->listsize==l->length)
		{
			ElemType *newE=realloc(l->elem,(l->listsize+LISTINCREMENT)*sizeof(ElemType));
			l->listsize+=LISTINCREMENT;
		}
		l->elem[k+1]=l->elem[k];

	}
	l->elem[i-1]=e;
	l->length++;
	return OK;

}
Status ListDelete(List*l,int i,ElemType e)
{
	if(i<1||i>l->length||l->length==0)
		return ERROR;
	e=l->elem[i-1];
	if(i<l->length)

		{int k;
		for(k=i-1;k<l->length-1;k++)
		{
			l->elem[k-1]=l->elem[k];
		}
		}
		l->length--;

}

int ListLength(List l)
{
	if(l.listsize==0||l.length==0)
		return 0;
	return l.length;

}
///求并集
void  Mergelist(List* la,List lb)  //la
{
    //int len_a=la.length;
   // int Len_b=lb.length;
    //List *lc;
    int i;
    //int a[10]={1,5,5,7,98,47,78,69,987,74};
    for(i=0;i<lb.length-1;i++)
    {
        if(!LocateElem(*la,lb.elem[i]))
        {
            printf("OK---%d\n",lb.elem[i]);
            ListInsert(la,la->length+1,lb.elem[i]);
        }
        else
            printf("NO----%d\n",lb.elem[i]);


    }

}

///顺序表的合并,合并a,b两个链表,并将结果赋给链表c

void ListUnion(List la,List lb,List *lc)
{
    ElemType *pa=la.elem;
    ElemType *pb=lb.elem;

    lc->listsize=lc->length=la.length+lb.length;
    //printf("lc->size=%d",lc->listsize);
    ElemType *pc=lc->elem=(ElemType*)malloc(lc->length*sizeof(ElemType));
    if(!lc->elem)
    {
        printf("error\n");
        exit(0);///内存开辟失败
    }


    ElemType *pa_last=la.elem+la.length-1;  ///la的最后一个元素地址
    ElemType *pb_last=lb.elem+lb.length-1;  ///lb的最后一个元素地址

    while(pa<=pa_last&&pb<=pb_last)
    {
        if(*pa<=*pb)
            *pc++=*pa++;
        else
            *pc++=*pb++;
    }
    while(pa<=pa_last) *pc++=*pa++;
    while(pb<=pb_last) *pc++=*pb++;
}


