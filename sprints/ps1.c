/**************************************************************************************************************************************************************/
/*																						Problem solving sprints contest 2                                      */
/**************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main()
{	int flag=0;
	int loop2=0;
	int size2=0;
	int left=0;
	int right=0;
	int sumofdigits=0;
	int loop=0;
	int numbers_in_arr=0;
	int scaned=0;
	scanf("%d",&scaned);
	size2=scaned;
	int *C=(int*)malloc(sizeof(int)*size2 );
	int *A=(int*)malloc(sizeof(int)*size2 );
	int *B=(int*)malloc(sizeof(int)*size2 );
	scaned*=3;
	int *ptr =(int*)malloc(sizeof(int)*scaned );
	
	for(loop=0;loop<scaned;loop++){
		scanf("%d",&numbers_in_arr);
		ptr[loop]=numbers_in_arr;
	}
	
	
for(loop=2;loop<scaned;loop+=3)
{
	int i=0;
	int max=0;
	max=ptr[loop];
	left=ptr[loop]/10;
	right=ptr[loop]%10;
	sumofdigits=left+right;
	C[loop2]=sumofdigits;	
	left=ptr[loop-1]/10;
	right=ptr[loop-1]%10;
	B[loop2]=left+right;

	left=ptr[loop-2]/10;
	right=ptr[loop-2]%10;
	A[loop2]=left+right;
	if(A[loop2]==C[loop2])
	{printf("%d\n",ptr[loop-2]);}
    else if(B[loop2]==C[loop2])
	{printf("%d\n",B[loop2]);}
	else{
		flag=0;
		while(ptr[loop-1] > ptr[loop-2])
		{	ptr[loop-2]++;
	
		left=ptr[loop-2]/10;
		right=ptr[loop-2]%10;
		sumofdigits=left+right;
		if(flag==0){
		if(sumofdigits == C[loop2])
		{
			flag++;
			printf("%d\n",ptr[loop-2]);
		}
		}
		}
		while(ptr[loop-1] < ptr[loop-2])
		{	ptr[loop-1]++;
	
		left=ptr[loop-1]/10;
		right=ptr[loop-1]%10;
		sumofdigits=left+right;
		if(flag==0){
		if(sumofdigits == C[loop2])
		{
			flag++;
			printf("%d\n",ptr[loop-1]);
		}
		}

		}
	}
	
	}
	loop2++;
	}
	
	
	
	return 0;
}

