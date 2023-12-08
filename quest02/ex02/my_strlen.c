#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* param_1)
{
int count = 0;
int i;
//int len = sizeof(*param_1);
for (i=0; param_1[i]; i++) {
if (param_1[i] == ' ') {
}
count++;
}
 
return count;

}

/*int main() {
char word[] = "ThE C4k3 Is a L|3";
    printf("%d\n", my_strlen(word));

}*/