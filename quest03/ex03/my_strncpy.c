#include <stdio.h>
#include <string.h>

char* my_strncpy(char* word_1, char* word_2, int num){
int i, count; 

/*for(i = 0; word_2[i] != '\0'; i++); {
    while(word_2[i] == num) {
       word_1[i] = word_2[i];
    }
}
word_1[i] = '\0';
return word_1;*/

while(*word_2 && num--) {
    *word_1 = *word_2;
    word_2++;
    word_1++;
}
*word_1 = '\0';
return word_1;

}

/*int main() {
  char dst[100] = {0};
  char *src     = "Hello";
  int num = 2;
  
  printf("%s\n", my_strncpy(dst, src, num));
  return 0;
}*/