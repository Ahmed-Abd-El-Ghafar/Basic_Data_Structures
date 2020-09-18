#ifndef _ARR_DS_USER_
#define _ARR_DS_USER_

#define ARRAY_MAX_ELEM 100UL
extern unsigned int number_user_elem;
extern unsigned int my_array[ARRAY_MAX_ELEM];

typedef enum return_status{
    RTEURN_NOK,
    RTEURN_OK
}return_status_t;

return_status_t add_element_to_array_ds(unsigned int elem, unsigned int elem_pos);
return_status_t print_data_at_my_array(unsigned int arr[], unsigned int num_elems);
return_status_t get_data_from_my_array(unsigned int arr[], unsigned int elem_pos,
                                       unsigned int *return_value);
return_status_t shift_data_right(unsigned int arr[], unsigned int elem_pos);
return_status_t shift_data_left(unsigned int arr[], unsigned int elem_pos);

#endif // _ARR_DS_USER_
