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

void my_putstr(char *c) {
    for(int i=0; c[i] != '\0'; i++) {
        char temp = c[i];
        write(1,&temp,1);   //write(int fd, char* buffer, int length)
       
    }
 putchar('\n');
}

void my_print_words_array(string_array* param_1)
{
//int len = strlen(*param_1->array);
for(int i = 0; i < param_1->size; i++) {
    //write(1, *(param_1->array+i), param_1->size);
    my_putstr(param_1->array[i]);
    
}
}

/*int main() {
string_array *my_struct = (string_array*)malloc(sizeof(string_array));

int array_size = 3;
char *arr[] = {"", "", "hello"};
my_struct->size = array_size;
my_struct->array = arr;

my_print_words_array(my_struct);

return 0;

}*/