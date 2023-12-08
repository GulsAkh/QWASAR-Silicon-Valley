#include <stdio.h>
#include <unistd.h>

//void ft_putchar(char c) { write(1, &c, 1); }

void my_putchar(char c) 
{ 
    write(1, &c, 1);
}

void my_print_alphabet()
{   char letter;
    letter = 'a';
    while(letter <= 'z') {
        my_putchar(letter);
        letter++;
        
    }
    my_putchar(012);
}

/*int main() {
    //my_putchar(' ');
    my_print_alphabet();
}  */