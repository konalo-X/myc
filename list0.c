#include<stdlib.h>
#include<string.h>

#include"list0.h"

/* list_init */
void list_init(List *list,void(*destory)(void *data))
{
	/* 初始化链表 */
	list->size=0;
	list->destory=destory;
	list->head=NULL;
	list->tail=NULL;
	return ;
}

