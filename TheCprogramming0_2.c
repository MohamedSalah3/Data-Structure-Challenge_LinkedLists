#include <stdio.h>
#include <stdlib.h>
/* copy input to output; 1st version */
/*int main()
{
int c;
c = getchar();
while (c != EOF) {
putchar(c);
c = getchar();
}
return 0;
}*//*
#include<stdio.h>

int main(void)
{
    printf("The value of EOF is %d Assuming senthil is a total cupper.",EOF);
    return 0;
}*/
/*Characters Counter*/
/*
int mian()
{
signed int Character=0;
unsigned long int counter=0;
Character = getchar();

while(Character != EOF)
{	
	putchar(Character);
	counter++;
	Character = getchar();
	if(Character == '\n'){counter=0;}
}





return 0;
}*/
/* count characters in input; 1st version */
main()
{
long nc;
nc = 0;
while (getchar() != EOF)
++nc;
printf("%ld\n", nc);

}