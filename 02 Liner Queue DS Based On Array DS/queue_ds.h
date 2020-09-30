#ifndef _QUEUE_DS_USER
#define _QUEUE_DS_USER

#include "std_types.h"

#define MAX_QUEUE 5
#define QUEUE_INTIALIZED -1
#define ZERO 0

typedef struct queue_ds{
    sint32_t queue_head;
    sint32_t queue_tail;
    uint32_t my_queue[MAX_QUEUE];
}queue_ds_t;

typedef enum queue_status{
    QUEUE_EMPTY,
    QUEUE_FULL,
    QUEUE_NOT_FULL,
    QUEUE_END
}queue_status_t;

ret_staus_t QueueInitialization(queue_ds_t *my_q);
ret_staus_t EnQueue(queue_ds_t *my_q, uint32_t value);
ret_staus_t DeQueue(queue_ds_t *my_q, uint32_t *value);
ret_staus_t DisplayQueue(queue_ds_t *my_q);

#endif // _QUEUE_DS_USER
