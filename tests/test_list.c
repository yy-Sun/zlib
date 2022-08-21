#include <stdio.h>
#include "zlist.h"

int 
main(){
    List *list = list_init();
    if (list == NULL){
        printf("Init list error!\n");
    }
    printf("list init success, size:%d\n", list->size);

    return 0;

}