#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the hourglassSum function below.
int hourglassSum(int arr_rows, int arr_columns, int** arr) {
int arr1[16][9];   
int counter=0;
int down=0;
int sum=0;
int max=0;/*
for(counter=0;counter<4;counter++){
for(down=0;down<4;down++){
   for(arr_rows=down;arr_rows<(3+down);arr_rows++){
	for(arr_columns=counter;arr_columns<3+counter;arr_columns++){
		printf("%d",arr[arr_rows][arr_columns]);
		}	
		printf("\n");
		}printf("\n");
}
}*//*
for(arr_rows=0;arr_rows<6;arr_rows++){
	for(arr_columns=0;arr_columns<6;arr_columns++){printf("%d\n",arr1[sum]=arr[arr_rows][arr_columns]);
		sum+=1;
		}	
		}

*/

for(counter=0;counter<4;counter++){
for(down=0;down<4;down++){
   for(arr_rows=down;arr_rows<(3+down);arr_rows++){
	for(arr_columns=counter;arr_columns<3+counter;arr_columns++){
		if(arr_columns==3 || (arr_rows==0 && counter==0 && down == 0)){continue;}
		else{printf("%d",arr[arr_rows][arr_columns]);
		sum+=arr[arr_rows][arr_columns];
		}
	printf("  %d  %d  %d  %d\n",arr_rows,arr_columns,counter,down);

	}	
//printf("  %d  %d  %d  %d\n",arr_rows,arr_columns,counter,down);

		printf("\n");

}
printf("\n");
	if(sum>=max)
{
	max=sum;
	printf("\n%d\n",max);

}
sum=0;
}

}
return max;		
}


int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int** arr = malloc(6 * sizeof(int*));

    for (int i = 0; i < 6; i++) {
        *(arr + i) = malloc(6 * (sizeof(int)));

        char** arr_item_temp = split_string(readline());

        for (int j = 0; j < 6; j++) {
            char* arr_item_endptr;
            char* arr_item_str = *(arr_item_temp + j);
            int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

            if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

            *(*(arr + i) + j) = arr_item;
        }
    }

    int arr_rows = 6;
    int arr_columns = 6;

    int result = hourglassSum(arr_rows, arr_columns, arr);

    fprintf(fptr, "%d\n", result);

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

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
