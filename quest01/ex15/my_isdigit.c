#include <stdio.h>

int my_isdigit(char digit)
{

    if (digit >= 48 && digit <= 57) {
        return 1;
    } else {
        return 0;
    }
    return 0;
}

/*int main() {
    printf("%d", my_isdigit('0'));
}*/