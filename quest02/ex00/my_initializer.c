#include <stdio.h>
#include <stdlib.h>

void my_initializer(int* param_1) {

   /*int *p = malloc(sizeof(int));
   *p = 6;*/

   *param_1 = 0;
}

/*int main() {
  int a = 12;
  //printf("%d\n", a); // will print 12
  my_initializer(&a);
  printf("%d\n", a); // will print 0
  return 0;
}*/