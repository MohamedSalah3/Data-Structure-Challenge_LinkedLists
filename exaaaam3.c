
// Complete the oddRepetition function below.

/* IMPORTANT NOTE:	DO NOT use printf and/or scanf in this file*/
int oddRepetition(int* arr, int arr_size)
{
int i,counter,max=0;
	while(i<arr_size)
	{ 
	if(arr[i] == arr[i+1])
	{
		counter++;
		if(counter>max){max=counter;}
		
	}else
	{
		counter=0;
	}
		
		
	i++;	
	}
	
	return ++max;
	

}



int main()
{
	int result;

	int arr[] = {2, 3, 2, 4, 5, 6, 5, 6, 6, 6, 4};	// The array
	int arr_size = 11;

	result = oddRepetition(arr, arr_size);
    printf("%d", result);	// The result must be 3

    return 0;
}
