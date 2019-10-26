#include <stdio.h>
    int main()
    {
        unsigned int i = 23;
        signed char c = -23;
		unsigned int z=c;
		printf("%d",z);
        if (i > c)
            printf("Yes\n");
   
   else if (i < c)
            printf("No\n");
    }
