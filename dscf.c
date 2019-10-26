/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void multiprint(unsigned char* intstr)
{int i=0,x,z,m=2;
unsigned char str2[25];
  while(m != 0){
   while(intstr[i] != ',')
    {
        str2[i]=intstr[i];
        i++;
    }
    ++i;
    x=intstr[i];
   // printf("%s",str2);
    printf("%d",x-48);
    z=x-48;
    while(z != 0)
    {
        printf("%s",str2); 
        z--;
    }
    ++i;
  --m;
      
  }
}
int main()
{
    unsigned char str[50];
    printf("Enter");
    gets(str);
    multiprint(str);
    return 0;
}
