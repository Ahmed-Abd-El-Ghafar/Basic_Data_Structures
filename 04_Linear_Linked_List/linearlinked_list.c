
#include "linearlinked_list.h"

node_t *start_node = NULL;

return_status_t add_node_at_the_start(void){
    node_t *temp_node = NULL;
    temp_node = (node_t *)malloc(sizeof(node_t));
    if(NULL == temp_node){
        printf("No Memory Space to create the node !! \n");
        return R_NOK;
    }
    else{
        printf("Enter your value : ");
        scanf("%i", &temp_node->data);
        temp_node->next = NULL;
        if(NULL == start_node){
            start_node = temp_node;
        }
        else{
            temp_node->next = start_node;
            start_node = temp_node;
        }
    }
    return R_OK;
}

return_status_t add_node_at_the_end(void){
    node_t *temp_node = NULL, *ptr_node = NULL;
    temp_node = (node_t *)malloc(sizeof(node_t));
    if(NULL == temp_node){
        printf("No Memory Space to create the node !! \n");
        return R_NOK;
    }
    else{
        printf("Enter your value : ");
        scanf("%i", &temp_node->data);
        temp_node->next = NULL;
        if(NULL == start_node){
            start_node = temp_node;
        }
        else{
            ptr_node = start_node;
            while(ptr_node->next != NULL){
                ptr_node = ptr_node->next;
            }
            ptr_node->next = temp_node;
        }
    }
    return R_OK;
}

return_status_t display_linked_list(void){
    node_t *ptr_node = NULL;
    if(NULL == start_node){
        printf("List is empty now !! \n");
        return R_NOK;
    }
    else{
        ptr_node = start_node;
        printf("Data : ");
        while(ptr_node != NULL){
            printf("%i\t", ptr_node->data);
            ptr_node = ptr_node->next;
        }
        printf("\n");
    }
}

return_status_t delete_node_at_the_start(void){
    node_t *ptr_node = NULL;
    if(NULL == start_node){
        printf("List is empty now !! \n");
        return R_NOK;
    }
    else{
        ptr_node = start_node;
        start_node = start_node->next;
        printf("First node (%i) deleted now .. \n", ptr_node->data);
        free(ptr_node);
    }
    return R_OK;
}

return_status_t delete_node_at_the_end(void){
    node_t *temp_node = NULL, *ptr_node = NULL;
    if(NULL == start_node){
        printf("List is empty now !! \n");
        return R_NOK;
    }
    else if(NULL == start_node->next){
        ptr_node = start_node;
        start_node = NULL;
        printf("Last node (%i) deleted now .. \n", ptr_node->data);
        free(ptr_node);
    }
    else{
        ptr_node = start_node;
        while(ptr_node->next != NULL){
            temp_node = ptr_node;
            ptr_node = ptr_node->next;
        }
        temp_node->next = NULL;
        printf("Last node (%i) deleted now .. \n", ptr_node->data);
        free(ptr_node);
    }
}

return_status_t add_node_at_position(void){
    node_t *temp_node = NULL, *ptr_node = NULL;
    uint32_t l_counter = ZERO_INIT, position = ZERO_INIT;
    temp_node = (node_t *)malloc(sizeof(node_t));
    if(NULL == temp_node){
        printf("No Memory Space to create the node !! \n");
        return R_NOK;
    }
    else{
        temp_node->data = ZERO_INIT;
        temp_node->next = NULL;
        printf("Enter the position : ");
        scanf("%i", &position);
        printf("Enter your value   : ");
        scanf("%i", &temp_node->data);
        if(0 == position){
            temp_node->next = start_node;
            start_node = temp_node;
        }
        else{
            ptr_node = start_node;
            for(l_counter=ZERO_INIT; l_counter<position-1; l_counter++){
                ptr_node = ptr_node->next;
                if(NULL == ptr_node){
                    printf("position not found !! \n");
                    return R_NOK;
                }
                else{}
            }
            temp_node->next = ptr_node->next;
            ptr_node->next = temp_node;
        }
    }
    return R_OK;
}

return_status_t delete_node_at_position(void){
    node_t *temp_node = NULL, *ptr_node = NULL;
    uint32_t l_counter = ZERO_INIT, position = ZERO_INIT;
    if(NULL == start_node){
        printf("List is empty now !! \n");
        return R_NOK;
    }
    else{
        printf("Enter the position : ");
        scanf("%i", &position);
        if(ZERO == position){
            ptr_node = start_node;
            start_node = start_node->next;
            printf("Node at position (%i) with data (%i) deleted now .. \n",position, ptr_node->data);
            free(ptr_node);
        }
        else{
            ptr_node = start_node;
            for(l_counter=ZERO_INIT; l_counter<position; l_counter++){
                temp_node = ptr_node;
                ptr_node = ptr_node->next;
                if(NULL == ptr_node){
                    printf("position not found !! \n");
                    return R_NOK;
                }
                else{}
            }
            temp_node->next = ptr_node->next;
            printf("Node at position (%i) with data (%i) deleted now .. \n",position, ptr_node->data);
            free(ptr_node);
        }
    }
    return R_OK;
}
