#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_strstr(char* word_1, char* word_2) {
if (word_2[0] == 0) {
    return word_1;
}
int i = 0;
while(word_1[i] != '\0') {
    int j = 0;
    while(word_2[j] != '\0') {
        if(word_1[i+j] != word_2[j]) {
        break;
    }
    if(j == strlen(word_2) - 1) {
        return &word_1[i];
    }   
    j++;  
} 
 i++;
}
return 0;
}
/*int main() {
    printf("%s\n", my_strstr("a", "a"));
}*/