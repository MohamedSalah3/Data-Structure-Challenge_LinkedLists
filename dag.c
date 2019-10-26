#include<stdio.h>
#include<string.h>
/*
char *getHello(char * str)
{
    strcpy(str,"Hello!");
    return(str);
}

int main()
{char str[10];
    //str falls out of scope
    //function call char *getHello() is now a dangling pointer 
    printf("%s", getHello(str));
}*//*

int main()
{
    char **strPtr;
    {
        char *str = "Helo!";
        strPtr = &str;
    }
    // str falls out of scope 
    // strPtr is now a dangling pointer 
    printf("%s", *strPtr);
}*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char **strPtr;
    char *str = malloc(10*sizeof(char));
	str="Hello!";
    strPtr = &str;
    free(str);
    //strPtr now becomes a dangling pointer
	
    printf("%s", *strPtr);
}