#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

char* my_upcase(char* letter) {
int i;
//char *ptr = (char*) malloc(12*sizeof(letter));

for(i = 0; letter[i] != '\0'; i++) {
    if (letter[i] >= 97 && letter[i] <= 122) {
        letter[i] = letter[i] - 32;
    }
  
}
return letter;
}

/*int main() {
  char *my_str = strdup("aBc");
  printf("%s\n", my_upcase(my_str));
  return 0;
}*/