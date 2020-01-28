#include <stdio.h>
#pragma GCC poison printf
 /*
 rise an error when printf is used
 */

int main()
{
printf("This code should not work!!\n");

return 0;
}
