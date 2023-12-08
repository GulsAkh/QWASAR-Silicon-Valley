#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int first_last(int x)
{
    if (x == 0)
    {
        return (0);
    }
    putchar('o');
    while (x >= 3)
    {
        putchar('-');
        x--;
    }
    if (x != 1)
    {
        putchar('o');
        
    }
    putchar('\n');
    return (0);
}

int middle_line(int x)
{
    if (x == 0)
    {
        return (0);
    }
    putchar('|');
    while (x >= 3)
    {
        putchar(' ');
        x--;
    }
    if (x != 1)
    {
        putchar('|');
        putchar('\n');
    }
     
 return (0);
}

int my_square(int x, int y)
{

if (x == 1 && y == 1)
{
    putchar('o');
    putchar('\n');
}
else if (y >= 1)
{
    first_last(x);
}
while (y > 2)
{
    middle_line(x);
    y--;
}
if (y >= 2) 
    first_last(x);
return (0);
}

int main(int ac, char **av)
{
if (ac < 3 )
{
    return (0);
}
int x = atoi(av[1]);
int y = atoi(av[2]);
my_square(x, y);
}

