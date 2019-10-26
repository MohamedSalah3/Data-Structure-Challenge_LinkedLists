#include <stdio.h>

int main()
{
int arr[3][3]={{10,4,9},{7,8,10},{5,12,8}};
int value;
value=arr[0][2]*((arr[2][2]*arr[2][0])-(arr[1][0]*arr[1][1]))-arr[0][1]*((arr[2][2]*arr[2][0])-(arr[1][0]*arr[1][1]))+arr[0][0]*((arr[1][2] * arr[2][1])-(arr[1][1]*arr[2][2]))
;
printf("%d",value);



return 0;
}