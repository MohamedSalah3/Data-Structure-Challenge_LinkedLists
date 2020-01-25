#include <stdio.h>

int main()
{
int arr[10]={9,0,7,1,2,6,5,4,3,8};
int arr_l[5]={0};
int arr_R[5]={0};
int count=0;
for(int i=0,j=5;i<5,j<10;i++,j++)
{
arr_l[i]=arr[i];	
arr_R[i]=arr[j];	
}
for(int i=0;i<5;i++){printf("%d\t%d\n",arr_l[i],arr_R[i]);}
for(int i=0;i<4;i++)
{
		for(int j=1,i=0;j<5,i<4;j++,i++)
		{
			int temp=0;
			if(arr_l[i]>arr_l[j])
			{   count++;
				temp=arr_l[i];
				arr_l[i]=arr_l[j];
				arr_l[j]=temp;
				
			}
			
		}
	
	
}
for(int i=0;i<4;i++)
{
		for(int j=1,i=0;j<5,i<4;j++,i++)
		{
			int temp=0;
			if(arr_R[i]>arr_R[j])
			{   count++;
				temp=arr_R[i];
				arr_R[i]=arr_R[j];
				arr_R[j]=temp;
				
			}
			
		}
	
	
}

for(int i=0;i<5;i++){printf("%d\t%d\n",arr_l[i],arr_R[i]);}


return 0;
}