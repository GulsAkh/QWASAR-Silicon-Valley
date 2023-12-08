#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 


int main(int argc, char **argv) 
{
int count;
int flopen;

    for (int i = 1; i < argc; i++)
    {
    flopen = open(argv[i], O_RDONLY);
        while(read(flopen,&count,1) == 1)
        {
            write(STDOUT_FILENO, &count, 1);
        }
        close(flopen);
    }
}



