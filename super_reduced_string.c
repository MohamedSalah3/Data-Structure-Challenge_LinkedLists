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
 char* shifting(char* str)
 {int i=0;
 while(s[i] != '\0'){
	 if(str[i]==str[i+1])
	 {int size=counter(str);
		for(int x=0;x<size;x++)
		{
			s[x]=s[x+2];
		} 
	 }

 }

return str;
}
char* superReducedString(char* s,int size) {

int i=0;
//counting
//sorting 
//printing
//Shifting
return s;
}/*
void printing (char* s)
{int i=0;
	while(s[i] != '\0')
	{
		printf("%c",s[i]);
	}
}*/
char* Sorting(char* string)
{int i=0,j=0,temp=0;
int n =counter(string);
for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
	return string;
}
int counter(char* s)
{int size=0;
	while(s[size] != '\0')
	{
		size++;
	}
	printf("size = %d\n",size);
return size;
}

int main()
{
    FILE* fptr = fopen("OUTPUT_PATH.txt", "w");

    char* s = readline();
	int size =counter(s);
    char* sorted = Sorting(s);
	printf("sorted= %s",sorted);
	char* shifted=shifting(Sorting(s));
	printf("shifted=%s",shifted);
	char* result = superReducedString(s,size);
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
