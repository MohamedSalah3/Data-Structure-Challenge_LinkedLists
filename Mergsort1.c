#include <stdio.h>

int main()
{
int arr[10]={9,0,7,1,2,6,5,4,3,8};
int arr_1[2]={0};
int arr_2[2]={0};
int arr_3[2]={0};
int arr_4[2]={0};
int arr_5[2]={0};
int count=0;
for(int i=0,j=2,k=4,l=6,M=8;i<2,j<4,k<6,l<8,M<10;i++,j++,k++,l++,M++)
{
arr_1[i]=arr[i];	
arr_2[i]=arr[j];	
arr_3[i]=arr[k];
arr_4[i]=arr[l];
arr_5[i]=arr[M];
}
for(int i=0;i<2;i++){printf("%d\t%d\t%d\t%d\t%d\n",arr_1[i],arr_2[i],arr_3[i],arr_4[i],arr_5[i]);}
		for(int j=1,i=0;j<2,i<1;j++,i++)
		{
			int temp=0;
			if(arr_1[i]>arr_1[j])
			{   count++;
				temp=arr_1[i];
				arr_1[i]=arr_1[j];
				arr_1[j]=temp;
				
			}
			
		}
	
	


		for(int j=1,i=0;j<2,i<1;j++,i++)
		{
			int temp=0;
			if(arr_2[i]>arr_2[j])
			{   count++;
				temp=arr_2[i];
				arr_2[i]=arr_2[j];
				arr_2[j]=temp;
				
			}
			
		}
	
	for(int j=1,i=0;j<2,i<1;j++,i++)
		{
			int temp=0;
			if(arr_3[i]>arr_3[j])
			{   count++;
				temp=arr_3[i];
				arr_3[i]=arr_3[j];
				arr_3[j]=temp;
				
			}
			
		}

for(int j=1,i=0;j<2,i<1;j++,i++)
		{
			int temp=0;
			if(arr_4[i]>arr_4[j])
			{   count++;
				temp=arr_4[i];
				arr_4[i]=arr_4[j];
				arr_4[j]=temp;
				
			}
			
		}for(int j=1,i=0;j<2,i<1;j++,i++)
		{
			int temp=0;
			if(arr_5[i]>arr_5[j])
			{   count++;
				temp=arr_5[i];
				arr_5[i]=arr_5[j];
				arr_5[j]=temp;
				
			}
			
		}

for(int i=0;i<2;i++){printf("%d\t%d\t%d\t%d\t%d\n",arr_1[i],arr_2[i],arr_3[i],arr_4[i],arr_5[i]);}

return 0;
}