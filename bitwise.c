#include<stdio.h>
/*
int main()
{
    printf("%x\n", 1>>3);
    return 0;
}
*/
/*
int main()
{
    unsigned char i = 0x80;
    printf("%d\n %d %d",i+=128, i<<1,sizeof(i));
    return 0;
}*/
	
//What will be the output of the program?
/*
#include<stdio.h>

int main()
{
    char c=48;
    int i, mask=01;
	printf("%d\n",mask);
    for(i=1; i<=5; i++)
    {
        printf("%c\n", c|mask);
        mask = mask<<1;
    }
    return 0;
}*/
#include<stdio.h>

int main()
{
    printf("%d %d\n", 32<<1, 32<<0);
    printf("%d %d\n", 32<<-1, 32<<-0);
    printf("%d %d\n", 32>>1, 32>>0);
    printf("%d %d\n", 32>>-1, 32>>-0);
    return 0;
}