
#include "queue_ds.h"

uint32_t my_queue[QUEUE_MAX_SIZE];
sint32_t queue_head = -1, queue_tail = -1;

static queue_status_t is_queue_full(void){
    if((queue_head == queue_tail+1) || (queue_tail == QUEUE_MAX_SIZE-1 && queue_head == 0)){
        return QUEUE_FULL;
    }
    else{
        return QUEUE_EMPTY;
    }
}

static queue_status_t is_queue_empty(void){
    if(queue_head == -1){
        return QUEUE_EMPTY;
    }
    else{
        return QUEUE_FULL;
    }
}

return_status_t add_element_to_queue(uint32_t my_queue[], uint32_t element){
    if(is_queue_full() == QUEUE_FULL){
        printf("Can't add (%i) this element, Queue is Full !!\n", element);
        return R_NOK;
    }
    else{
        if(is_queue_empty() == QUEUE_EMPTY){
            queue_head = 0;
            queue_tail = 0;
        }
        else{
            queue_tail = (queue_tail+1) % QUEUE_MAX_SIZE;
        }
        my_queue[queue_tail] = element;
    }
    printf("Element (%i) added to the queue\n", element);
    return R_OK;
}

return_status_t get_element_from_queue(uint32_t my_queue[], uint32_t *element){
    if(is_queue_empty() == QUEUE_EMPTY){
        printf("Can't get element form the queue cause it is Empty !!\n");
        return R_NOK;
    }
    else{
        *element = my_queue[queue_head];
        if(queue_head == queue_tail){
            queue_head = -1;
            queue_tail = -1;
        }
        else{
            queue_head = (queue_head+1) % QUEUE_MAX_SIZE;
        }
    }
    return R_OK;
}

return_status_t display_elements_at_queue(uint32_t my_queue[]){
    uint32_t counter = 0;
    if(is_queue_empty() == QUEUE_EMPTY){
        printf("Can't display the queue cause it is Empty !!\n");
        return R_NOK;
    }
    else{
        printf("Queue : ");
        for(counter = queue_head; counter != queue_tail; counter = (counter+1) % QUEUE_MAX_SIZE){
            printf("%i\t", my_queue[counter]);
        }
        printf("%i\t", my_queue[counter]);
        printf("\n");
    }
    return R_OK;
}
