#include <stdio.h>
int main()
{
int AVrage=0,Number_students=0,sum=0,counter=1,Grad_students=0;
	printf("Enter The Number of Students\n");
		scanf("%d",&Number_students);

while(counter <=Number_students)
{
	printf("Enter the grad of %d student\n",counter);
		scanf("%d",&Grad_students);
if(Grad_students >= 0 && Grad_students <= 100){
	printf("The Grad of student number %d is %d\n",counter,Grad_students);
	sum+=Grad_students;
}
else{
counter--;
}
counter++;
}
AVrage=sum/Number_students;
printf("sum equals %d\n The average Grad of Your class is %d\n",sum,AVrage);

return 0;
}