#include <stdio.h>
#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}


void my_print_reverse_alphabet() {
char c;
for (c = 'z'; c >= 'a'; c--) {
 my_putchar(c);
 
}
my_putchar(012);
}

/*int main() {
    my_print_reverse_alphabet();
}*/