#include <stdio.h>/*standard input output lib*/
void __attribute__((constructor)) func1();/*call func1 before calling main*/
void __attribute__((destructor)) func2();/*call func2 before exiting main*/
void func1(void);/*func 1 prototype*/
void func2(void);/*func 2 prototype*/
int main()
{
  printf("Now we are inside the main function\n");
return 0;
}
void func1(void)
{
  printf("Now we are inside function one\n");
}
void func2(void)
{
  printf("Now we are inside function two before return 0\n");
}
