#include <stdio.h>
#include <stdlib.h>

#include "stack_ds_.h"

unsigned int my_data;

int main()
{
    return_status_t status = RTEURN_NOK;
    status = display_data_at_stack(my_stack);
    status = push_new_data_at_stack(my_stack, 11);
    status = push_new_data_at_stack(my_stack, 22);
    status = push_new_data_at_stack(my_stack, 33);
    status = push_new_data_at_stack(my_stack, 44);
    status = display_data_at_stack(my_stack);
    status = pop_data_from_stack(my_stack, &my_data);
    printf("my data = %i\n", my_data);
    status = pop_data_from_stack(my_stack, &my_data);
    printf("my data = %i\n", my_data);
    status = display_data_at_stack(my_stack);
    status = pop_data_from_stack(my_stack, &my_data);
    printf("my data = %i\n", my_data);
    status = pop_data_from_stack(my_stack, &my_data);
    printf("my data = %i\n", my_data);
    status = display_data_at_stack(my_stack);
    status = push_new_data_at_stack(my_stack, 11);
    status = push_new_data_at_stack(my_stack, 22);
    status = display_data_at_stack(my_stack);
    status = modify_data_at_stack(my_stack, 0, 99);
    status = display_data_at_stack(my_stack);
    return 0;
}
