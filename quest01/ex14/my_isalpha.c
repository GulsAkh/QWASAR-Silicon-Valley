#include <stdio.h>

int my_isalpha(char c) {
    if (c >= 97 && c <= 122 || c >= 65 && c <= 90) {
        return 1;
    } else {
        return 0;
    }
    return 0;
}

/*int main() {
    printf("%d", my_isalpha('0'));
}*/