
#include "queue_ds.h"

/**
  * @brief  Initialize the Queue
  * @param  my_queue Pointer to the Queue.
  * @retval Status if the function execution
  */
return_status_t QueueInitialize(queue_ds_t *my_queue){
    if(NULL == my_queue){return R_NOK;}
    else{
        StackInitialize(&my_queue->first_stack);
        StackInitialize(&my_queue->second_stack);
    }
    return R_OK;
}

/**
  * @brief  Add Element to the Queue
  * @param  my_queue Pointer to the Queue.
  * @param  value Value to be added
  * @retval Status if the function execution
  */
return_status_t Enqueue(queue_ds_t *my_queue, uint32_t value){
    if((NULL == my_queue) || (StackIsFull(&my_queue->first_stack))){
        printf("Error, Queue is FULL, can't add (%i) !! \n", value);
        return R_NOK;
    }
    else{
        StackPush(&my_queue->first_stack, value);
        printf("Value (%i) Added to the queue \n", value);
    }
    return R_OK;
}

/**
  * @brief  Get Element from the Queue
  * @param  my_queue Pointer to the Queue.
  * @param  value pointer to the variable that will store the returned value
  * @retval Status if the function execution
  */
return_status_t Dequeue(queue_ds_t *my_queue, uint32_t *value){
    uint32_t l_buffer = ZERO_INIT;
    if(NULL == my_queue){
        return R_NOK;
    }
    else{
        if(!StackIsEmpty(&my_queue->second_stack)){
            StackPop(&my_queue->second_stack, value);
        }
        else{
            while(!StackIsEmpty(&my_queue->first_stack)){
                StackPop(&my_queue->first_stack, &l_buffer);
                StackPush(&my_queue->second_stack, l_buffer);
            }
            StackPop(&my_queue->second_stack, value);
        }
    }
    return R_OK;
}
