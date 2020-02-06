#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>
#include <stdlib.h>
typedef unsigned char uint8_t;

typedef struct Queue{
uint8_t *ptr_to_queue_arr;
uint8_t size;
uint8_t front;
uint8_t rear;
}Queue;

extern Queue *G_Queue_ptr;
void createQueue(Queue* info,uint8_t maxSize);

void enqueue(Queue *info,uint8_t data);

void dequeue(Queue *info,uint8_t *data);

#endif
