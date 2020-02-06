#include "Queue.h"
Queue *G_Queue_ptr=NULL;
uint8_t g_u8_count=0;
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
g_u8_count++;
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
g_u8_count--;
G_Queue_ptr=info;
}

signed char is_Empty(void)
{
if(g_u8_count == G_Queue_ptr->size)
{
return 0;
}else if(g_u8_count==0){
  return 1;
}
else
{
return -1;
}


}
