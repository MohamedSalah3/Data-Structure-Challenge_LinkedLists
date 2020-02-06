#include "Queue.h"
Queue *G_Queue_ptr=NULL;
void createQueue(Queue* info,uint8_t maxSize)
{
(info->ptr_to_queue_arr)=(uint8_t *)calloc(maxSize,1);
(info->size)=maxSize;
(info->rear)=maxSize-1;
(info->front)=0;
G_Queue_ptr=info;
}

void enqueue(Queue *info,uint8_t data)
{
if((info->rear) == (info->size-1))
{
info->rear=0;
((info->ptr_to_queue_arr)[info->rear])=data;
printf("circular :%d\n",data);
}else
{
  (info->rear)+=1;
  ((info->ptr_to_queue_arr)[info->rear])=data;
printf(" Normal :%d\n",data);
}
G_Queue_ptr=info;
}


void dequeue(Queue *info,uint8_t *data)
{

if((info->front) == (info->size-1))
{
  *data=((info->ptr_to_queue_arr)[(info->front)]);
  info->front=0;
  printf("circular deque%d\n",*data );
}else
{
  *data=((info->ptr_to_queue_arr)[(info->front)]);
  (info->front)+=1;
  printf("Normal deque%d\n",*data );
}
G_Queue_ptr=info;
}
