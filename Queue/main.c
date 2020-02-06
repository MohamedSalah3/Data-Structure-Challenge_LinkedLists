#include "Queue.h"
int main() {
uint8_t size_needed=0;
uint8_t data_return=0;
printf("Enter the maximum num of elements \n");
scanf("%d",&size_needed);
Queue Data_base2;
G_Queue_ptr=&Data_base2;
createQueue(G_Queue_ptr,size_needed);
enqueue(G_Queue_ptr,10);
//printf("%d\n",G_Queue_ptr->ptr_to_queue_arr[0]);
dequeue(G_Queue_ptr,&data_return);
//printf("%d\n",G_Queuea_ptr->ptr_to_queue_arr[0]);
enqueue(G_Queue_ptr,12);
enqueue(G_Queue_ptr,5);
enqueue(G_Queue_ptr,4);
enqueue(G_Queue_ptr,3);
dequeue(G_Queue_ptr,&data_return);
  return 0;
}
