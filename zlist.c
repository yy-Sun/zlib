/**
 * @file zlist.c
 * @author zhuyy (2485480126@qq.com)
 * @brief 链表实现
 * @version 0.1
 * @date 2022-08-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdlib.h>
#include "zlist.h"


List *
list_init()
{
    List *list = malloc(sizeof(List));
    if(list == NULL) {
        return NULL;
    }

    list = (List*)list;
    list->head = NULL;
    list->size=0;
    return list;
}