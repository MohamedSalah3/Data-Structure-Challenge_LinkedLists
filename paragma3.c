#include <stdio.h>
#define add Mapss
 /*
 rise an error when printf is used
 */
void add (void)
{
  printf("hamada\n");

}
int main()
{
  add();
#pragma GCC poison add
add();
printf("Tchis code should not work!!\n");
return 0;
}
