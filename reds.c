#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the superReducedString function below.

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */

char* superReducedString(char* s)
{int x=0,i=0;
char arr[26]={0};
while(s[i] != '\0')
{
x=s[i]-97;
arr[x]++;
i++;
}/* 
for (int i=0;i<26;i++)
printf("%d\n",arr[i]);
*/
for (int i=0;i<26;i++)
{if(arr[i] % 2)
{
arr[i]=97+i;	
}else{
	arr[i]='0';
}	

}
int j=0;
//while(s[j] != '\0'){s[j]=' '; j++;}
for (int i=0;i<26;i++)
{int x=0;
if(arr[i] != '0')
{printf("%c",arr[i]);
s[x]=arr[i];
x++;
}
}
return arr;
}

int main()
{
    FILE* fptr = fopen(("OUTPUT_PATH.txt"), "w");

    char* s = readline();

    char* result = superReducedString(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
