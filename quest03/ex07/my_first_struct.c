#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
#include <stdio.h>
#include <stdlib.h>

typedef struct s_integer_array {
    int size;
    int* array;
} integer_array;
#endif 

void my_first_struct(integer_array* param1) {
//integer_array *any_name = (integer_array*)malloc(sizeof(integer_array));
//any_name->array = (int*) malloc(sizeof(int) * param1->size);
//any_name->size = param1->size;
printf("%i\n", param1->size);
for (int i=0; i < param1->size; i++) {
   //any_name[i].array = param1[i].array;
   printf("%i\n", param1->array[i]);
}
}
/*int main() {
integer_array* any_name = malloc(sizeof(struct s_integer_array));
any_name->size = 100;

any_name->array = STRUCT_INTEGER_ARRAY;
my_first_struct(&any_name);
}*/

