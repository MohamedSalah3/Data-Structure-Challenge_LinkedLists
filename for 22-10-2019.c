/*
In this challenge, you will learn the usage of the for loop, which is a programming language statement which allows code to be repeatedly executed.

The syntax for this is
for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop will be

for(int i = 0; i < 10; i++) {
    ...
}
Task

For each integer n is interval [a,b]
If 1<=n<=9 then print the English representation of it in lowercase. That is "one"
for 1
and Two for 2 and so on 
if n > 9 and its an even number "even"
if n > 9 and its an odd number "odd"

 
*/
#include <stdio.h>

int main()
{
int a,b;

printf("Enter A,B");
scanf("%d%d",&a,&b);	
for(int i=a;i<=b;i++)
{
if(i<=9){
switch (i){
case 1:
printf("one\n");
break;
case 2:	
printf("two\n");
break;
case 3:
printf("three\n");
break;
case 4:
printf("four\n");
break;
case 5:
printf("Five\n");
break;
case 6:
printf("six\n");
break;
case 7:
printf("Seven\n");
break;
case 8:
printf("eight\n");
break;
case 9:
printf("nine\n");
break;	
}	
}
else if((i>9) && (i%2))
{
printf("odd\n");	
}else if((i>9) && (!(i%2))){printf("even\n");}
}	
	
return 0;
}