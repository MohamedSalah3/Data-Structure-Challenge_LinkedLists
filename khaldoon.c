#include <stdio.h>
#include <stdlib.h>

//#pragma pack(1)
#pragma pack(3)

typedef struct
{
   char A;
   int B;
   char C;
}OMG;

int main()
{
    OMG obj;
    int size = sizeof(obj);
    printf("%d \n", size);
    return 0;
}
