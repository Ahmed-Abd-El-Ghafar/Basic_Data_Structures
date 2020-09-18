
#include "stack_ds_.h"

unsigned int my_stack[ARRAY_MAX_STACK];
int stack_pointer = -1;
int *stack_ptr = NULL;

return_stack_status_t is_stack_full(void){
    if(stack_pointer == ARRAY_MAX_STACK-1){
        return RTEURN_STACK_FULL;
    }
    else{
        return RTEURN_STACK_NOT_FULL;
    }
}

return_stack_status_t is_stack_empty(void){
    if(stack_pointer < STACK_EMPTY){
        return RTEURN_STACK_Empty;
    }
    else{
        return RTEURN_STACK_NOT_FULL;
    }
}


return_status_t push_new_data_at_stack(unsigned int my_stack[], unsigned int new_data){
    if(is_stack_full() == RTEURN_STACK_FULL){
        printf("Error, stack if FULL, can't add this element !! \n");
        return RTEURN_NOK;
    }
    else{
        stack_pointer++;
        my_stack[stack_pointer] = new_data;
        printf("Data %i added \n", new_data);
    }
    return RTEURN_OK;
}

return_status_t pop_data_from_stack(unsigned int my_stack[], unsigned int *get_data){
    if(is_stack_empty() == RTEURN_STACK_Empty){
        printf("Error, stack if Empty, can't get this element !! \n");
        return RTEURN_NOK;
    }
    else{
        *get_data = my_stack[stack_pointer];
        stack_pointer--;
    }
    return RTEURN_OK;
}

return_status_t modify_data_at_stack(unsigned int my_stack[], unsigned int data_pos,
                                     unsigned int new_data){
    if(is_stack_empty() == RTEURN_STACK_Empty){
        printf("Error, stack if Empty, can't get this element !! \n");
        return RTEURN_NOK;
    }
    else if(data_pos >= stack_pointer){
        printf("Error, data position out of range !! \n");
        return RTEURN_NOK;
    }
    else{
        my_stack[data_pos] = new_data;
    }
    return RTEURN_OK;
}

return_status_t get_number_of_data_at_stack(unsigned int my_stack[], unsigned int *num_elems){
    if(is_stack_empty() == RTEURN_STACK_Empty){
        printf("Error, stack if Empty !! \n");
        return RTEURN_NOK;
    }
    else{
        *num_elems = stack_pointer+1;
    }
}

return_status_t display_data_at_stack(unsigned int my_stack[]){
    if(is_stack_empty() == RTEURN_STACK_Empty){
        printf("Error, stack is Empty !! \n");
        return RTEURN_NOK;
    }
    else{
        printf("Data : ");
        int counter = 0;
        for(counter=stack_pointer; counter>=STACK_FIRST_DATA; counter--){
            printf("%i\t", my_stack[counter]);
        }
        printf("\n");
    }
}

