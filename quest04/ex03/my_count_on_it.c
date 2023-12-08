#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

integer_array* my_count_on_it(string_array* param_1) {
integer_array *int_struct = malloc(sizeof(integer_array));
int_struct->size = param_1->size;
int_struct->array = malloc(int_struct->size * sizeof(int));
int i;
for(i = 0; i < param_1->size; i++) {
 int str_len = strlen(param_1->array[i]);
int_struct->array[i] = str_len;
//param_1->array++;
 //printf("%d", int_struct->array[i]);

}
return int_struct;
}

/*int main() {
string_array *my_struct = (string_array*)malloc(sizeof(string_array));
char* str[] = {"This", "is", "the", "way"};
int size = 13;
my_struct->array = str;
my_struct->size = size;
my_count_on_it(my_struct);
}*/