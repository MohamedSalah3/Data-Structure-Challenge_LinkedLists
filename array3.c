#include <stdio.h>
#define NUMBER_OF_STUDENTS 10
#define RESPONSE 11

int main(){
int arr[NUMBER_OF_STUDENTS]={0},frequency[RESPONSE]={0},sum=0;

for(int i=0;i<NUMBER_OF_STUDENTS;i++){
frequency[i]=0;
printf("Enter The Student Rating NUMBER %d\n",i);
printf("1 means owful ,10 means Excellent\n");
scanf("%d",&arr[i]);
for(int j=0;j<RESPONSE;j++){
if(arr[i] == j){frequency[j]++;}
}
sum += arr[i];
}
printf("rating of the students %d\n",(sum/NUMBER_OF_STUDENTS));
for(int j=0;j<RESPONSE;j++){printf("%d\n",frequency[j]);}
return 0;
}