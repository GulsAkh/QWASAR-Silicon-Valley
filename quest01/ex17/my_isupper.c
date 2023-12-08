#include <stdio.h>

int my_isupper(char upper)
{
 if (upper >= 65 && upper <= 90) {
     return 1;
 } else {
     return 0;
 }
}

/*int main() {
    printf("%d", my_isupper('0'));
}*/