#include <stdio.h>

int my_islower(char low)
{
if (low >= 97 && low <= 122) {
    return 1;
} else {
    return 0;
}
return 0;
}

/*int main() {
    printf("%d", my_islower('a'));
}*/