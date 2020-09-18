#include <stdio.h>
#include <stdlib.h>

#include "arr_ds.h"

unsigned int return_value_array;
unsigned int new_data_pos, new_data;

int main()
{
    return_status_t status = RTEURN_NOK;

    printf("Enter your number of elements : ");
    scanf("%i", &number_user_elem);
    if(number_user_elem > ARRAY_MAX_ELEM){
        printf("Number of needed elements exeed the MAX elements ! \n");
        exit(0);
    }
    else{
        printf("Enter Data : ");
        unsigned int counter = 0, new_elem = 0;
        for(counter=0; counter<number_user_elem; counter++){
            scanf("%i", &new_elem);
            status = add_element_to_array_ds(new_elem, counter);
            if(status == RTEURN_NOK){
                printf("Issue Happned while adding the element number %i \n", counter);
                exit(0);
            }
        }
        printf("===============================\n");
        printf("Your Data : ");
        status = print_data_at_my_array(my_array, number_user_elem);
        if(status == RTEURN_NOK){
            printf("Issue Happned while adding the element number %i \n", counter);
            exit(0);
        }
        printf("===============================\n");
        /*
        status = get_data_from_my_array(my_array,5, &return_value_array);
        if(status == RTEURN_NOK){
            printf("Issue Happned \n");
            exit(0);
        }
        printf("Your elem : %i\n", return_value_array);
        */
        printf("===============================\n");
        printf("Enter the new position : ");
        scanf("%i", &new_data_pos);
        if(new_data_pos > ARRAY_MAX_ELEM-1){
            printf("Out of range Position ! \n");
            exit(0);
        }
        else{
            printf("Enter the new data : ");
            scanf("%i", &new_elem);
        }
        // Shift R
        shift_data_right(my_array,new_data_pos);
        print_data_at_my_array(my_array, number_user_elem);
        add_element_to_array_ds(new_elem, new_data_pos);
        print_data_at_my_array(my_array, number_user_elem);
        printf("===============================\n");
        printf("Enter position to delete it : ");
        scanf("%i", &new_data_pos);
        if(new_data_pos > ARRAY_MAX_ELEM-1){
            printf("Out of range Position ! \n");
            exit(0);
        }
        else{
            shift_data_left(my_array,new_data_pos);
            print_data_at_my_array(my_array, number_user_elem);
        }

    }
    return 0;
}


