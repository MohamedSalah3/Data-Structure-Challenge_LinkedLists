/*********************************************************************************
 *
 *  problem_one.c
 *  Author: Ahmed Nofal, Instructor at Sprints LLC 
 *
 ********************************************************************************/
#include <stdio.h>
#include "problem_one.h"

/****************************[Problem Description]*********************************
 *
 * Given an array that is circularly rotated and sorted in an ascending order and
 * the rotation is clock wise, find the number of rotations in the array.
 *
 * Sample Input:  arr = [8, 9, 10, 2, 5, 6]
 * Sample Output: The Array is rotated 3 times
 *
 * Sample Input:  arr = [2, 5, 6, 8, 9, 10]
 * Sample Output: The array is rotated 0 times
 *
 ********************************************************************************/

/*********************************************************************************
 *
 * Function: findRotationCount
 * @param: arr[], Array that the function should find the number of rotations in.
 * @param: arr_size, Size of the array
 * Description: Function to find the number of times the array is rotated
 *
 ********************************************************************************/
int findRotationCount(int arr[], int arr_size) {
	/* Your code goes here  */
unsigned int min=100;
unsigned Lower=0;
unsigned higher=arr_size-1;
unsigned mid=((Lower+higher)/2);
while(Lower <= higher && higher <= arr_size && Lower>= 0)
{
	if(arr[mid] <= arr[mid+1] && arr[mid] <= arr[mid-1] && arr[mid+1] <= arr[mid-1])
	{
	mid = ((Lower+ higher)/2);
	if(min >= arr[mid]){min=arr[mid];} 
	return mid;
	break;
		
	}else if(arr[mid] <= arr[mid+1] && arr[mid] >= arr[mid-1] && arr[mid+1] >= arr[mid-1])
	{
		higher= mid-1;
		
	mid = ((Lower+ higher)/2);
	return mid;
	if(min >= arr[mid]){min=arr[mid];}
		break;
	}
	else if(arr[mid] <= arr[mid+1] && arr[mid] >= arr[mid-1] && arr[mid+1] >= arr[mid-1])
	{
		Lower= mid+1;
		mid = ((Lower+ higher)/2);
		if(min >= arr[mid]){
			min=arr[mid];
		}
	
	}


}


}

/*********************************************************************************
 *
 * findRotationCount_Test function to test your code
 *
 ********************************************************************************/
void findRotationCount_Test(void)
{
	int arr[] = { 8, 9, 10, 0, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int count = findRotationCount(arr, 6);
	printf("The array is rotated %d times\n", count);
}
