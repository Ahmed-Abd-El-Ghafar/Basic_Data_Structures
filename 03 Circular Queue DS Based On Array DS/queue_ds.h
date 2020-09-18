#ifndef _QUEUE_DS_USER
#define _QUEUE_DS_USER

#include "std_types.h"

#define QUEUE_MAX_SIZE 5UL

extern unsigned int my_queue[QUEUE_MAX_SIZE];

typedef enum queue_status{
    QUEUE_EMPTY,
    QUEUE_FULL
}queue_status_t;

return_status_t add_element_to_queue(uint32_t my_queue[], uint32_t element);
return_status_t get_element_from_queue(uint32_t my_queue[], uint32_t *element);
return_status_t display_elements_at_queue(uint32_t my_queue[]);

#endif // _QUEUE_DS_USER
