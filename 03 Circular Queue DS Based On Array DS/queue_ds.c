
#include "queue_ds.h"

/**
  * @brief  Check if the Queue is Full or Not
  * @param  my_q    Pointer to the Queue.
  * @retval Status if the function execution
  */
static queue_status_t queue_is_full(queue_ds_t *my_q){
    if((my_q->queue_head == my_q->queue_tail+1) ||
       ((my_q->queue_tail == MAX_QUEUE-1) && (my_q->queue_head == ZERO))){
        return QUEUE_FULL;
    }
    else{return QUEUE_NOT_FULL;}
}

/**
  * @brief  Check if the Queue is Empty or Not
  * @param  my_q    Pointer to the Queue.
  * @retval Status if the function execution
  */
static queue_status_t queue_is_empty(queue_ds_t *my_q){
    if((my_q->queue_head == QUEUE_INTIALIZED) && (my_q->queue_tail == QUEUE_INTIALIZED)){return QUEUE_EMPTY;}
    else{return QUEUE_NOT_FULL;}
}

/**
  * @brief  Initialize the Queue pointers
  * @param  my_q    Pointer to the Queue.
  * @retval Status if the function execution
  */
ret_staus_t QueueInitialization(queue_ds_t *my_q){
    my_q->queue_head = QUEUE_INTIALIZED;
    my_q->queue_tail = QUEUE_INTIALIZED;
}

/**
  * @brief  Add Element to the Queue
  * @param  my_q    Pointer to the Queue.
  * @param  value   Value to be added
  * @retval Status if the function execution
  */
ret_staus_t EnQueue(queue_ds_t *my_q, uint32_t value){
    if(queue_is_full(my_q) == QUEUE_FULL){
        printf("Queue is full, can't add (%i) !!\n", value);
        return R_NOK;
    }
    else{
        if(queue_is_empty(my_q) == QUEUE_EMPTY){
            my_q->queue_head = ZERO;
            my_q->queue_tail = ZERO;
        }
        else{
            my_q->queue_tail = (my_q->queue_tail+1) % MAX_QUEUE;
        }
        my_q->my_queue[my_q->queue_tail] = value;
    }
    printf("(%i) Added to the Queue \n", value);
    return R_OK;
}

/**
  * @brief  Get Element from the Queue
  * @param  my_q    Pointer to the Queue.
  * @param  value   pointer to the variable that will store the returned value
  * @retval Status if the function execution
  */
ret_staus_t DeQueue(queue_ds_t *my_q, uint32_t *value){
    if(queue_is_empty(my_q) == QUEUE_EMPTY){
        printf("Queue is Empty !!\n");
        return R_NOK;
    }
    else{
        *value = my_q->my_queue[my_q->queue_head];
        printf("(%i) returned from the Queue \n", my_q->my_queue[my_q->queue_head]);
        if(my_q->queue_head == my_q->queue_tail){
            my_q->queue_head = -1;
            my_q->queue_tail = -1;
        }
        else{
            my_q->queue_head = (my_q->queue_head+1) % MAX_QUEUE;
        }
    }
    return R_OK;
}

/**
  * @brief  Display the Elements of the Queue
  * @param  my_q    Pointer to the Queue.
  * @retval Status if the function execution
  */
ret_staus_t DisplayQueue(queue_ds_t *my_q){
    sint32_t l_counter = ZERO;
    if(queue_is_empty(my_q) == QUEUE_EMPTY){
        printf("Queue is Empty !!\n");
        return R_NOK;
    }
    else{
        printf("Data : ");
        for(l_counter = my_q->queue_head; l_counter != my_q->queue_tail; l_counter = (l_counter+1) % MAX_QUEUE){
            printf("%i\t", my_q->my_queue[l_counter]);
        }
        printf("%i\t", my_q->my_queue[l_counter]);
        printf("\n");
    }
    return R_OK;
}
