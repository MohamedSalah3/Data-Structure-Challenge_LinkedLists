#include <stdio.h>
#include <stdlib.h>

int main(){
 int coloumn=0,rotation=0,rows = 0;
 scanf("%d",&coloumn);
 scanf("%d",&rows);
 scanf("%d",&rotation);
 int buffer=0;
 int count=0;
 int scaned=0;
int** matrix =(int**) malloc(sizeof(int*) * coloumn);
 

for(int i=0;i<rows;i++)
matrix[i]=(int*)malloc(sizeof(int) * rows);
 
 
 for(int j=0;j<coloumn;j++)
		for(int i=0;i<rows;i++)
		{
			scanf("%d",&scaned);
			matrix[i][j]=scaned;
		}
		
		
 for(int j=0;j<coloumn;j++)
 {
		for(int i=0;i<rows;i++)
		{
			printf("%d\t",matrix[i][j]);
		}
 printf("\n");
 }	
 
/********************************************************************************************/
/*							trying to rotate the matrix 									*/ 
/*******************************************************************************************/
 buffer=matrix[0][0];
 
 
 
 
 return 0;
}