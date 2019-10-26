#include <stdio.h>
static inline int f();
int main()
{

int i=f();
printf("%d\n",i);


return 0;
}
static inline int f()
{


return 10;



}