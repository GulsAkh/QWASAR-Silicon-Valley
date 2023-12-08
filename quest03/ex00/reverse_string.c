#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse_string(char* word)
{
    int i, len;
    char *temp = malloc (sizeof (word) * 20);
    len = strlen(word);
    for(i = len; i >= 0; i--) {
      temp[len - i - 1] = word[i];
    }
    temp[len] = '\0';
    return temp;
    
}

/*int main() {
  char my_str[] = "Hello";
  printf("%s\n", reverse_string(my_str));
  return 0;
}*/