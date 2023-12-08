#include <stdio.h>
#include <string.h>

int my_strcmp(char* word_1, char* word_2)
{

char len_1 = strlen(word_1);
char len_2 = strlen(word_2);

if (len_1 < len_2) {
    return 1;
} else if (len_2 < len_1) {
    return -1;
} else {
    return 0;
}

}

/*int main() {
  char *s1 = "abkjdfzd";
  char *s2 = "Hello";
  
  printf("%d\n", my_strcmp(s1, s2));
  return 0;
}*/