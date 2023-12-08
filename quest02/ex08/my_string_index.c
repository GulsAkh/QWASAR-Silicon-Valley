#include <stdio.h>

int my_string_index(char* haystack, char needle)
{   
    int i;
    for(i = 0; haystack[i] != '\0'; i++) {
        if (needle == haystack[i]) {
             return i;
        }  
        
    }

    return -1;
}
   
/*int main() {
    printf("%d\n", my_string_index("hello", 'l'));
}*/