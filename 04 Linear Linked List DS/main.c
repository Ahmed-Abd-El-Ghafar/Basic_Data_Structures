#include <stdio.h>
#include <stdlib.h>

#include "linearlinked_list.h"



int main()
{
    display_linked_list();
    add_node_at_the_start();
    add_node_at_the_start();
    add_node_at_the_start();
    display_linked_list();
    add_node_at_position();
    display_linked_list();
    delete_node_at_position();
    display_linked_list();

    return 0;
}
