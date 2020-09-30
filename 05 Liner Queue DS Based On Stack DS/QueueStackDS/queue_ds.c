
#include "queue_ds.h"

return_status_t QueueInitialize(queue_ds_t *my_queue){
    if(NULL == my_queue){return R_NOK;}
    else{
        StackInitialize(&my_queue->first_stack);
        StackInitialize(&my_queue->second_stack);
    }
    return R_OK;
}

return_status_t Enqueue(queue_ds_t *my_queue, uint32_t value){
    if(NULL == my_queue){
        return R_NOK;
    }
    else{
        StackPush(&my_queue->first_stack, value);
        printf("Value (%i) Added to the queue \n", value);
    }
    return R_OK;
}

return_status_t Dequeue(queue_ds_t *my_queue, uint32_t value){
    if(NULL == my_queue){
        return R_NOK;
    }
    else{

    }
    return R_OK;
}
