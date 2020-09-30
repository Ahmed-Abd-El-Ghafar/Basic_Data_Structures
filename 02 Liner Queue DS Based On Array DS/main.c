#include <stdio.h>
#include <stdlib.h>

#include "queue_ds.h"

queue_ds_t queue1;
queue_ds_t queue2;
uint32_t my_val;

int main()
{
    ret_staus_t ret;
    ret = QueueInitialization(&queue1);
    ret = QueueInitialization(&queue2);
    EnQueue(&queue1, 11); DisplayQueue(&queue1);
    EnQueue(&queue1, 22); DisplayQueue(&queue1);
    EnQueue(&queue1, 33); DisplayQueue(&queue1);
    EnQueue(&queue1, 44); DisplayQueue(&queue1);
    EnQueue(&queue1, 55); DisplayQueue(&queue1);
    DeQueue(&queue1, &my_val); DisplayQueue(&queue1);
    DeQueue(&queue1, &my_val); DisplayQueue(&queue1);
    DeQueue(&queue1, &my_val); DisplayQueue(&queue1);
    EnQueue(&queue1, 99); DisplayQueue(&queue1);
    EnQueue(&queue1, 111); DisplayQueue(&queue1);
    EnQueue(&queue1, 222); DisplayQueue(&queue1);
    EnQueue(&queue1, 333); DisplayQueue(&queue1);
    return 0;
}
