#ifndef _QUEUE_DS_USER
#define _QUEUE_DS_USER

#include "stack_ds_.h"

typedef struct queue_ds{
    stack_ds_t first_stack;
    stack_ds_t second_stack;
}queue_ds_t;

return_status_t QueueInitialize(queue_ds_t *my_queue);
return_status_t Enqueue(queue_ds_t *my_queue, uint32_t value);
return_status_t Dequeue(queue_ds_t *my_queue, uint32_t *value);

#endif // _QUEUE_DS_USER
