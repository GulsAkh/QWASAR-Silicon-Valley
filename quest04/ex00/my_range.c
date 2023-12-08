#include <stdio.h>
#include <stdlib.h>

int* my_range(int param_1, int param_2)
{
int i;
int *arr;
int size = param_2-param_1+1;
arr = malloc(size * sizeof(int));

for (i = 0; i < size; i++) {
  arr[i] = param_1 + i;
  
}
return arr;
}
/*int main() {
int a = 7;
int b = 11;
my_range(a, b);
}*/