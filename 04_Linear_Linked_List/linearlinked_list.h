#ifndef _LINEAE_LINKED_LIST
#define _LINEAE_LINKED_LIST

#include "std_types.h"

typedef struct node{
    uint32_t data;
    struct node *next;
}node_t;

return_status_t add_node_at_the_start(void);
return_status_t add_node_at_the_end(void);
return_status_t display_linked_list(void);
return_status_t delete_node_at_the_start(void);
return_status_t delete_node_at_the_end(void);
return_status_t add_node_at_position(void);
return_status_t delete_node_at_position(void);

#endif // _LINEAE_LINKED_LIST
