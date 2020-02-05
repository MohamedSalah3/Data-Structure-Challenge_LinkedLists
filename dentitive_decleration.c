#include <stdio.h>
 #define X(y) #y
 extern int x;
 int x=10;
 
 int main()
 {
	 
	printf(X("hi\n")) ;
	 
 return 0;
 }