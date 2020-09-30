
#include "stack_ds_.h"

static return_stack_status_t is_stack_full(stack_ds_t *my_stack){
    if(my_stack->top == MAX_WIDTH-1){return RTEURN_STACK_FULL;}
    else{return RTEURN_STACK_NOT_FULL;}
}

static return_stack_status_t is_stack_empty(stack_ds_t *my_stack){
    if(my_stack->top == -1){return RTEURN_STACK_Empty;}
    else{return RTEURN_STACK_NOT_FULL;}
}

return_status_t StackInitialize(stack_ds_t *my_stack){
    if(NULL == my_stack){return R_NOK;}
    else{my_stack->top = -1;}
    return R_OK;
}

return_status_t StackPush(stack_ds_t *my_stack, uint32_t value){
    if((NULL == my_stack) || (RTEURN_STACK_FULL == is_stack_full(my_stack))){
        printf("Error, Stack if FULL, can't add this element !! \n");
        return R_NOK;
    }
    else{
        my_stack->top++;
        my_stack->data[my_stack->top] = value;
        printf("Value (%i) pushed to the stack \n", value);
    }
    return R_OK;
}

return_status_t StackPop(stack_ds_t *my_stack, uint32_t *value){
    if((NULL == my_stack) || (RTEURN_STACK_Empty == is_stack_empty(my_stack))){
        printf("Error, Stack if Empty, can't pop any element !! \n");
        return R_NOK;
    }
    else{
        *value = my_stack->data[my_stack->top];
        my_stack->top--;
        printf("Value (%i) Popped from the stack \n", value);
    }
    return R_OK;
}

return_status_t StackTop(stack_ds_t *my_stack, uint32_t *value){
    if((NULL == my_stack) || (RTEURN_STACK_Empty == is_stack_empty(my_stack))){
        printf("Error, Stack if Empty !! \n");
        return R_NOK;
    }
    else{
        *value = my_stack->data[my_stack->top];
        printf("Value (%i) is the top of the stack \n", value);
    }
    return R_OK;
}

return_status_t StackSize(stack_ds_t *my_stack, uint32_t *value){
    if((NULL == my_stack) || (RTEURN_STACK_Empty == is_stack_empty(my_stack))){
        printf("Error, Stack if Empty !! \n");
        return R_NOK;
    }
    else{
        *value = my_stack->top+1;
    }
    return R_OK;
}
