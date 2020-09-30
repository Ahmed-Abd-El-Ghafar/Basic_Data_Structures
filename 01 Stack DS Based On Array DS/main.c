#include <stdio.h>
#include <stdlib.h>

#include "stack_ds_.h"

stack_ds_t stack1;
unsigned int my_data;

int main()
{
    return_status_t status = R_NOK;
    status = StackInitialize(&stack1);
    StackPush(&stack1, 11); StackDisplay(&stack1);
    StackPush(&stack1, 22); StackDisplay(&stack1);
    StackPush(&stack1, 33); StackDisplay(&stack1);
    StackPush(&stack1, 44); StackDisplay(&stack1);
    StackPush(&stack1, 55); StackDisplay(&stack1);
    printf("==============\n");
    StackPop(&stack1, &my_data); StackDisplay(&stack1);
    StackPop(&stack1, &my_data); StackDisplay(&stack1);
    StackPop(&stack1, &my_data); StackDisplay(&stack1);
    StackPop(&stack1, &my_data); StackDisplay(&stack1);
    StackPop(&stack1, &my_data); StackDisplay(&stack1);
    StackPop(&stack1, &my_data); StackDisplay(&stack1);
    return 0;
}
