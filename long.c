/*longest consicutive accurance of a given number given in array*/
#include <stdio.h>

int main()
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
	
}unsigned char longest(int * ptr,int arr_size,int searchfor)
{int i,counter,max=0;
	while(i<arr_size)
	{ 
	if(ptr[i] == searchfor)
	{
		counter++;
		if(counter>max){max=counter;}
		
	}else
	{
		counter=0;
	}
		
		
	i++;	
	}
	
	return max;
	
}