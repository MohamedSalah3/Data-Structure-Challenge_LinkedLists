/*inline function*/
#include <stdio.h>
static inline int func(int x)
{
return ++x;
}
int main(int argc, char const *argv[]) {
int x=10;
printf("%d\n",func(x));
  return 0;
}
