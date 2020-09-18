
#include "queue_ds.h"

uint32_t my_elem;

int main()
{
    return_status_t fun_ret_status;
    fun_ret_status = add_element_to_queue(my_queue, 11);
    fun_ret_status = add_element_to_queue(my_queue, 22);
    fun_ret_status = add_element_to_queue(my_queue, 33);
    fun_ret_status = display_elements_at_queue(my_queue);
    fun_ret_status = add_element_to_queue(my_queue, 44);
    fun_ret_status = add_element_to_queue(my_queue, 55);
    fun_ret_status = add_element_to_queue(my_queue, 66);
    fun_ret_status = display_elements_at_queue(my_queue);
    fun_ret_status = get_element_from_queue(my_queue, &my_elem);
    fun_ret_status = display_elements_at_queue(my_queue);
    fun_ret_status = get_element_from_queue(my_queue, &my_elem);
    fun_ret_status = get_element_from_queue(my_queue, &my_elem);
    fun_ret_status = display_elements_at_queue(my_queue);
    fun_ret_status = add_element_to_queue(my_queue, 66);
    fun_ret_status = add_element_to_queue(my_queue, 77);
    fun_ret_status = display_elements_at_queue(my_queue);
    fun_ret_status = add_element_to_queue(my_queue, 88);
    fun_ret_status = display_elements_at_queue(my_queue);
    return 0;
}
