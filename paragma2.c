#include <stdio.h>
#pragma warn -rvl /*ignore warning of missing return value*/
#pragma warn -par /*ignore warning of parameter never used*/
#pragma warn -rch /*ignore un reachable code*/
int show(int);
int main()
{
show(10);
return 0;
}
int show(int x)
{
printf("Thank you Geuvara !!\n");
}
