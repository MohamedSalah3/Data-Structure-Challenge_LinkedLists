#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>
#include <stdlib.h>
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef long long uint64_t;
typedef struct Queue{
uint8_t *ptr_to_queue_arr;
uint8_t size;
uint8_t front;
uint8_t rear;
}Queue;

extern Queue *G_Queue_ptr;
void createQueue(Queue* info,uint8_t maxSize);

void enqueue(Queue *info,uint8_t data);
uint8_t checkForBalancedParantheses(char* expression);
void dequeue(Queue *info,uint8_t *data);
int8_t is_Empty(void);
uint64_t evaluate(char* expression);
#endif
