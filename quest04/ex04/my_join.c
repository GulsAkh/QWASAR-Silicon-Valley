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

char* my_join(string_array* param_1, char* param_2){

    int len = param_1->size;
    if (len == 0){
        return(NULL);
    }
    int total_len =((len-1) * strlen(param_2) + 1);
    char *str = malloc(sizeof(string_array) + len*sizeof(char));
    int i, j;
    int index = 0;
    int index_str = 0;
    //  {"ab\0", "aef", "gh"}; param_2 = "adam"   abadamaefadamghadam'\0'
    for (j=0; j < len; j++) {
        index = 0;
            while(param_1->array[j][index] != '\0') {
                str[index_str] = param_1->array[j][index];
                index++;
                index_str++;
            }
        index=0;
        if(j < len-1) {
            while(param_2[index] != '\0') {
                str[index_str] = param_2[index];
                index_str++;
                index++;
            }
        }

    }
    str[index_str] = '\0';
return str;

}
/* int main() {
    string_array *my_struct = malloc(sizeof(string_array));
    char *str[] = {"ab", "aef", "gh"};
    my_struct->array = str;
    my_struct->size = 3;
    char* let = "-";

    printf("%s", my_join(my_struct, let));
    }*/
    