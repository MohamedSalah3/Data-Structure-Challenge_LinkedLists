/*********************************************************************************
 *
 *  problem_two.c
 *  Author: Ahmed Nofal, Instructor at Sprints LLC 
 *
 ********************************************************************************/


/****************************[Problem Description]*********************************
 *
 * Modify the Binary Search algorithm to find an element in a circularly sorted
 * array.
 * The array is sorted in an ascending order and rotated in clockwise
 *
 * Sample Input: arr = [8, 9, 10, 2, 5, 6]
 * 				 target = 10
 * Sample Output: The number is found at index 2
 *
 ********************************************************************************/
#include <stdio.h>
#include "problem_two.h"

/*********************************************************************************
 *
 * Function: circularArraySearch
 *
 * @param: arr[], Array that the function should find the number in.
 * @param: arr_size, Size of the array
 * @param: element_to_be_found, The elment to be searcher for
 * @return: int, the index of the element to be found
 *
 * Description: Function to find the number of times the array is rotated, if the
 * element was not found it should return -1
 *
 ********************************************************************************/
int circularArraySearch(int arr[], int arr_size, int element_to_be_found)
{


unsigned int Lower_Bound=0,index;

unsigned int Higher_Bound=(arr_size-1);
unsigned int mid=((Lower_Bound + Higher_Bound)/2);
while(Lower_Bound <= Higher_Bound && Higher_Bound <= size && Lower_Bound >= 0 ){
if(arr[mid]==value)
{//printf("%d %d %d\n ",Lower_Bound,Higher_Bound,mid);
mid = ((Lower_Bound + Higher_Bound)/2);
	return mid;
	break;
	}else if(arr[mid] < value)
{//printf("%d %d %d\n ",Lower_Bound,Higher_Bound,mid);
	Lower_Bound = mid+1;
	mid =((Lower_Bound + Higher_Bound)/2);
if(arr[mid]== value){
	return mid;
	break;
}
}
else if(arr[mid] > value)
{//printf("%d %d %d\n ",Lower_Bound,Higher_Bound,mid);
	
	Higher_Bound = mid-1;
	mid=((Lower_Bound + Higher_Bound)/2);
}
else
{
	return -1;
}


	
}


	/* Your code goes here */
}

/* circularArraySearch_test */
void circularArraySearch_test(void)
{
	int A[] = {9, 10, 2, 5, 6, 8};
	int target = 10;
	int n = sizeof(A)/sizeof(A[0]);
	int index = circularArraySearch(A, n, target);
	if(index != -1){
		printf("Element found at index %d", index);
	}
	else{
		printf("Element not found in the array");
	}

}
