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
if(is_Empty() == -1 || is_Empty()== 1){
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
else{printf(" queue is full\n");}
}
void dequeue(Queue *info,uint8_t *data)
{
if(is_Empty()==0 || is_Empty() == -1){
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
}else{printf("queue is Empty");
}
}
int8_t is_Empty(void)
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

uint8_t checkForBalancedParantheses(char* expression)
{
uint8_t loop=0,paranthese_loop=0,small_loop=0;
char arr_of_paranthese[20];
  do
  {
  if( (expression[loop]=='{')||
        (expression[loop]== '}')||
            (expression[loop]=='(')||
              (expression[loop]==')') ||
                (expression[loop]=='[') ||
                (expression[loop]==']')  )
                {
                  arr_of_paranthese[paranthese_loop]=expression[loop];
                  paranthese_loop++;
                }else if(expression[loop] >= 42 && expression[loop] <= 57 ){
                  enqueue(G_Queue_ptr,expression[loop]);
                printf("Hi\n");
				}
      loop++;
  }while (expression[loop]);

while (paranthese_loop >= 0) {
if(arr_of_paranthese[paranthese_loop-1-small_loop] - arr_of_paranthese[small_loop] <= 2)
{
  small_loop++;
  return 1;
}else{
return 0;
}
if(paranthese_loop){
  paranthese_loop--;
}else{break;}
}

}

uint64_t evaluate(char* expression)
{
  uint64_t Evaluation_return=0;
uint8_t one_loop=0;
uint8_t arr[3]={0,0,0};
//uint8_t *ptr2arr=arr;
uint8_t flag_first_3_deque=0;
uint8_t is_Balanced=0;
printf("%s\n",expression);
printf("hi\n");
is_Balanced=checkForBalancedParantheses(expression);
while (is_Empty() != 1) {
if(!flag_first_3_deque)
{
  for(one_loop=0;one_loop<3;one_loop++)
  {
dequeue(G_Queue_ptr,&arr[one_loop]);
flag_first_3_deque=1;
}
switch (arr[1]) {
  case '+':
  Evaluation_return=arr[0]+arr[2];
  break;
  case '-':
  Evaluation_return=arr[0]-arr[2];
  break;
  case '*':
  Evaluation_return=arr[0]*arr[2];
  break;
  case '/':
  Evaluation_return=arr[0]/arr[2];
  break;
}
}
else
{
for(one_loop=1;one_loop<3;one_loop++)
dequeue(G_Queue_ptr,&arr[one_loop]);
switch (arr[1]) {
  case '+':
  Evaluation_return+=arr[2];
  break;
  case '-':
  Evaluation_return-=arr[2];
  break;
  case '*':
  Evaluation_return*=arr[2];
  break;
  case '/':
  Evaluation_return/=arr[2];
  break;

}

}

}
return Evaluation_return;
}