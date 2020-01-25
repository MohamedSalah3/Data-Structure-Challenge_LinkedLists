#include <stdio.h>

struct employee
{
int age;
char name[100];
float salary;	
}; 

void print(struct employee emp)
{
printf("age is %d\n",emp.age);		
}

struct employee read()
{
struct employee emp;	
printf("Enter Your age\n");	
scanf("%d",&emp.age);		
return emp;
}


int main()
{
	struct employee emp1;
	emp1=read();	
	print(emp1);
	
	return 0;
}