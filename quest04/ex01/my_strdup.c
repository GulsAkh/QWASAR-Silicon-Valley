#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_strdup(char* param_1)
{
int size = sizeof(param_1);
char* c1 = malloc(size * sizeof(char));
int i = 0;
while(param_1[i] != '\0') {
   c1[i] = param_1[i];
   //printf("%c", c1[i]);
   i++;
}
  return c1;
}

/*int main() {
char c[6] = "Hello";
my_strdup(c);
}
*/