#include <stdio.h>
#include <string.h>


char* my_downcase(char* letter)
{
int i; 
for(i = 0; letter[i] != '\0'; i++) {
    if (letter[i] >= 65 && letter[i] <= 90) {
           letter[i] = letter[i] + 32;
    }

}
return letter;
}

/*int main() {
  char *my_str = strdup("AbcE Fgef1");
  printf("%s\n", my_downcase(my_str));
  return 0;
}*/