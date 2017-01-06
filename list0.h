/*list0.h*/
#ifndef LIST0_H
#define LIST0_H
#include<stdlib.h>

/*定义链表节点结构*/
typedef struct ListElmt_
{
	void *data;
	struct ListElmt_ *next;
}ListElmt;

/*定义链表结构*/
typedef struct List_
{
	int size;//记录链表大小
	int (*match)(const void *key1,const void *key2);//????
	void (*destory)(void *data);//???
	ListElmt *head;//第一个结点
	ListElmt *tail;//最后一个结点
}List;

/* public interface */
void list_init(List *list,void (*destory)(void *data));
void list_destory(List *list);
int list_ins_next(List *list,ListElmt *element,const void *data);
int list_rem_next(List *list,ListElmt *element,void **data);

#define list_head(list) ((list)->head)
#define list_tail(list)((list)->tail)
#define list_is_head(list,element)((element)==(list)->head?1:0)
#define list_is_tail(element)((element)->next==NULL?1:0)
#define list_data(element)((element)->data)
#define list_next(element)((element)->next)

#endif
