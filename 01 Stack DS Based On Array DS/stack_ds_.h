#ifndef _STACK_DS_USER
#define _STACK_DS_USER

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_MAX_STACK 100UL
#define STACK_EMPTY 0
#define STACK_FIRST_DATA 0

extern unsigned int my_stack[ARRAY_MAX_STACK];

typedef enum return_status{
    RTEURN_NOK,
    RTEURN_OK
}return_status_t;

typedef enum return_stack_status{
    RTEURN_STACK_NOT_FULL,
    RTEURN_STACK_FULL,
    RTEURN_STACK_Empty
}return_stack_status_t;

return_stack_status_t is_stack_full(void);
return_stack_status_t is_stack_empty(void);

return_status_t push_new_data_at_stack(unsigned int my_stack[], unsigned int new_data);
return_status_t pop_data_from_stack(unsigned int my_stack[], unsigned int *get_data);
return_status_t modify_data_at_stack(unsigned int my_stack[], unsigned int data_pos,
                                     unsigned int new_data);
return_status_t get_number_of_data_at_stack(unsigned int my_stack[], unsigned int *num_elems);
return_status_t display_data_at_stack(unsigned int my_stack[]);


return_status_t push_new_data_at_stack_ptr(unsigned int *my_stack, unsigned int new_data);
return_status_t pop_data_from_stack_ptr(unsigned int *my_stack, unsigned int *get_data);
return_status_t modify_data_at_stack_ptr(unsigned int *my_stack, unsigned int data_pos,
                                     unsigned int new_data);
return_status_t get_number_of_data_at_stack_ptr(unsigned int *my_stack, unsigned int *num_elems);
return_status_t display_data_at_stack_ptr(unsigned int *my_stack);

#endif // _STACK_DS_USER
