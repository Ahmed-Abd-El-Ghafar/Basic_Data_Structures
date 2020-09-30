#include <stdio.h>
#include <stdlib.h>

#include "queue_ds.h"

queue_ds_t queue1;
uint32_t my_data;

int main()
{
    return_status_t ret;
    ret = QueueInitialize(&queue1);
    ret = Enqueue(&queue1, 11);
    ret = Enqueue(&queue1, 22);
    ret = Enqueue(&queue1, 33);
    ret = Enqueue(&queue1, 44);
    ret = Enqueue(&queue1, 55);
    ret = Enqueue(&queue1, 66);
    printf("--------------\n");
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    printf("--------------\n");
    ret = Enqueue(&queue1, 66);
    ret = Enqueue(&queue1, 77);
    ret = Enqueue(&queue1, 88);
    ret = Enqueue(&queue1, 99);
    ret = Enqueue(&queue1, 111);
    ret = Enqueue(&queue1, 222);
    printf("--------------\n");
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    printf("--------------\n");
    ret = Enqueue(&queue1, 222);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    ret = Dequeue(&queue1, &my_data); printf("my_data = %i\n", my_data);
    return 0;
}
