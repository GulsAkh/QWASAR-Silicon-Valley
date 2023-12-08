#include <stdio.h>
#include <stdlib.h>

void my_swap(int* param_1, int* param_2) {

int temp = *param_1;
*param_1 = *param_2;
*param_2 = temp;

}

/*int main() {

int var_a = 12;
int var_b = 21;

printf("A - %d ** B - %d\n", var_a, var_b);
my_swap(&var_a, &var_b);
printf("B - %d ** A - %d\n", var_a, var_b);

}*/