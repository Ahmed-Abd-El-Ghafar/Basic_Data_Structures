
#include "stack_ds_.h"

/*
 * File:   stack_ds_.c
 * Author: Ahmed.Abd.ElGhafar
 * Embedded Systems Diploma (Basic Data Structures Course)
 * Created on September 19, 2020, 11:48 PM
 */

/**
  * @brief  Check if the Stack is Full or Not
  * @param  my_stack Pointer to the Stack.
  * @retval Status if the function execution
  */
return_stack_status_t StackIsFull(stack_ds_t *my_stack){
    if(my_stack->top == MAX_WIDTH-1){return RTEURN_STACK_FULL;}
    else{return RTEURN_STACK_NOT_FULL;}
}

/**
  * @brief  Check if the Stack is Empty or Not
  * @param  my_stack Pointer to the Stack.
  * @retval Status if the function execution
  */
return_stack_status_t StackIsEmpty(stack_ds_t *my_stack){
    if(my_stack->top == -1){return RTEURN_STACK_Empty;}
    else{return RTEURN_STACK_NOT_FULL;}
}

/**
  * @brief  Initialize the Stack pointers
  * @param  my_stack Pointer to the Stack.
  * @retval Status if the function execution
  */
return_status_t StackInitialize(stack_ds_t *my_stack){
    if(NULL == my_stack){return R_NOK;}
    else{my_stack->top = -1;}
    return R_OK;
}

/**
  * @brief  Add Element to the Stack
  * @param  my_stack Pointer to the Stack.
  * @param  value Value to be added
  * @retval Status if the function execution
  */
return_status_t StackPush(stack_ds_t *my_stack, uint32_t value){
    if((NULL == my_stack) || (RTEURN_STACK_FULL == StackIsFull(my_stack))){
        #ifdef DEBUG
        printf("Error, Stack is FULL, can't add (%i) !! \n", value);
        #endif // DEBUG
        return R_NOK;
    }
    else{
        my_stack->top++;
        my_stack->data[my_stack->top] = value;
        #ifdef DEBUG
        printf("Value (%i) pushed to the stack \n", value);
        #endif // DEBUG
    }
    return R_OK;
}

/**
  * @brief  Get Element from the Stack
  * @param  my_stack Pointer to the Stack.
  * @param  value pointer to the variable that will store the returned value
  * @retval Status if the function execution
  */
return_status_t StackPop(stack_ds_t *my_stack, uint32_t *value){
    if((NULL == my_stack) || (RTEURN_STACK_Empty == StackIsEmpty(my_stack))){
        #ifdef DEBUG
        printf("Error, Stack is Empty, can't pop any element !! \n");
        #endif // DEBUG
        return R_NOK;
    }
    else{
        *value = my_stack->data[my_stack->top];
        my_stack->top--;
        #ifdef DEBUG
        printf("Value (%i) Popped from the stack \n", *value);
        #endif // DEBUG
    }
    return R_OK;
}

/**
  * @brief  Get the Top from the Stack
  * @param  my_stack Pointer to the Stack.
  * @param  value pointer to the variable that will store the returned value
  * @retval Status if the function execution
  */
return_status_t StackTop(stack_ds_t *my_stack, uint32_t *value){
    if((NULL == my_stack) || (RTEURN_STACK_Empty == StackIsEmpty(my_stack))){
        #ifdef DEBUG
        printf("Error, Stack is Empty !! \n");
        #endif // DEBUG
        return R_NOK;
    }
    else{
        *value = my_stack->data[my_stack->top];
        #ifdef DEBUG
        printf("Value (%i) is the top of the stack \n", value);
        #endif // DEBUG
    }
    return R_OK;
}

/**
  * @brief  Get the size of the Stack
  * @param  my_stack Pointer to the Stack.
  * @param  value pointer to the variable that will store the returned value
  * @retval Status if the function execution
  */
return_status_t StackSize(stack_ds_t *my_stack, uint32_t *value){
    if((NULL == my_stack) || (RTEURN_STACK_Empty == StackIsEmpty(my_stack))){
        #ifdef DEBUG
        printf("Error, Stack is Empty !! \n");
        #endif // DEBUG
        return R_NOK;
    }
    else{
        *value = my_stack->top+1;
    }
    return R_OK;
}

/**
  * @brief  Display the Stack
  * @param  my_stack Pointer to the Stack.
  * @retval Status if the function execution
  */
return_status_t StackDisplay(stack_ds_t *my_stack){
    sint32_t l_counter = ZERO_INIT;
    if((NULL == my_stack) || (RTEURN_STACK_Empty == StackIsEmpty(my_stack))){
        printf("Error, Stack is Empty, Can't display any data !! \n");
        return R_NOK;
    }
    else{
        printf("Stack : ");
        for(l_counter = my_stack->top; l_counter >= ZERO; l_counter--){
            printf("%i\t", my_stack->data[l_counter]);
        }
        printf("\n");
    }
    return R_OK;
}
