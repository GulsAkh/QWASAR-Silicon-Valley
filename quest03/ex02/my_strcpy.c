#include <stdio.h>


char* my_strcpy(char* word_1, char* word_2){

int i;
for(i = 0; word_2[i] != '\0'; i++) {
   word_1[i] = word_2[i];
}
 
  word_1[i] = '\0';
  return word_1;
}

/*int main() {
  char dst[100] = {0};
  char *src     = "hellooooo";
  
  printf("%s\n", my_strcpy(dst, src));
  return 0;
}*/