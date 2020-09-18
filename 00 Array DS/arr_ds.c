
#include "arr_ds.h"

unsigned int my_array[ARRAY_MAX_ELEM];
unsigned int number_user_elem;

return_status_t add_element_to_array_ds(unsigned int elem, unsigned int elem_pos){
    if(elem_pos > number_user_elem-1){
        printf("Out of range position : add_element_to_array_ds !! %i\n \n", __LINE__);
        return RTEURN_NOK;
    }
    else{
        my_array[elem_pos] = elem;
    }
    return RTEURN_OK;
}

return_status_t print_data_at_my_array(unsigned int arr[], unsigned int num_elems){
    unsigned int counter = 0;
    if(num_elems > number_user_elem){
        printf("Out of range position : print_data_at_my_array !! %i\n", __LINE__);
        return RTEURN_NOK;
    }
    else{
        printf("Data : ");
        for(counter=0; counter<num_elems; counter++){
            printf("%i\t", arr[counter]);
        }
        printf("\n");
    }
    return RTEURN_OK;
}

return_status_t get_data_from_my_array(unsigned int arr[], unsigned int elem_pos,
                                       unsigned int *return_value){
    if(elem_pos > number_user_elem-1){
        printf("Out of range position !! \n");
        return RTEURN_NOK;
    }
    else{
        *return_value = arr[elem_pos];
    }
    return RTEURN_OK;
}

return_status_t shift_data_right(unsigned int arr[], unsigned int elem_pos){
    unsigned int counter = 0;
    number_user_elem++;
    if(elem_pos > number_user_elem-1){
        printf("Out of range position !! \n");
        return RTEURN_NOK;
    }
    else{
        for(counter=number_user_elem; counter>elem_pos; counter--){
            arr[counter] = arr[counter-1];
        }
    }
    return RTEURN_OK;
}

return_status_t shift_data_left(unsigned int arr[], unsigned int elem_pos){
    unsigned int counter = 0;
    number_user_elem--;
    if(elem_pos > number_user_elem-1){
        printf("Out of range position !! \n");
        return RTEURN_NOK;
    }
    else{
        for(counter=elem_pos; counter<number_user_elem; counter++){
            arr[counter] = arr[counter+1];
        }
    }
    return RTEURN_OK;
}
