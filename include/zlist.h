//
// 实现一个链表结构.
//

#ifndef ZLIB_ZLIST_H
#define ZLIB_ZLIST_H

#include <stdint.h>
struct Node {
    void *data;
    struct Node *next;
};

struct List {
    struct Node *head;
    uint32_t size;
};

typedef struct Node Node;
typedef struct List List;

/**
 * @brief 初始化一个链表
 * 初始化成功返回链表地址，初始化失败则返回NULL
 * @return List* 
 */
List *
list_init();


/**
 * @brief 向链表中指定下标插入一个元素
 * 如果插入失败，则返回 NULL， 否则返回插入的数据 data
 * @param list 链表
 * @param index 下标 
 * @param data 数据
 */
void * 
list_insert(List* list, u_int32_t index, void *data);

/**
 * @brief 根据下标获取列链表中的元素
 * 
 * @param list 链表
 * @param index 
 * @return void* 元素
 * @return NULL 元素不存在
 */
void * 
list_get_item(List *list, u_int32_t index);

/**
 * @brief 获取链表中元素的数量
 * 
 * @param list 链表
 * @return u_int32_t 元素的数量
 */
u_int32_t
list_sizt(List *list);

/**
 * @brief 弹出链表中指定下标的元素
 * 如果下表不存在，则返回 NULL
 * @param list 
 * @param index 
 * @return void* 
 */
void *
list_pop(List * list, u_int32_t index);


#endif //ZLIB_ZLIST_H
