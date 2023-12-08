# Welcome to My Square
***

## Task
My task was to create a function which displays a square with symbols. The challenge was printing
a symbol horizontally as long as vertically. Segfault is a challenge as well. Also need to check for zero arguments.

## Description
I have solved the problem by setting the second argument as a start point, based on which 
the first argument was printing, because any program is executed line by line, vertically and then horizontally.

## Installation
Need to add libraries: stdio.h, string.h, stdlib.h                                                 
                                                                                                    

## Usage
Set the first argument, the second argument, by which the perimeter of the square is created and printed.
Compile your pogram with GNU, then call the executable file in your current directory.

```
./my_project argument1 argument2
```
________________________________________________________________
My Square	
Submit directory	ex00
Submit file	my_square.c
Description
Create a program which displays a beautiful square.

my_square(5,3) should display:

$>./a.out 5 3
o---o
|   |
o---o
$>
my_square(5, 1) should display:

$>./a.out 5 1
o---o
$>
my_square(1, 1) should display:

$>./a.out 1 1
o
$>
my_square(1, 5) should display:

$>./a.out 1 5
o
|
|
|
o
$>
my_square(4, 4) should display:

$>./a.out 4 4
o--o
|  |
|  |
o--o
$>
Tips:

0.
$>gcc my_file.c
$>./a.out

1.
int main(int ac, char **av);

2.
int x = atoi(av[1]);
int y = atoi(av[2]);

3.
Be careful segfault. :-)
From docode you can download the qwasar_my_square by executing this command to compare your output with ours:

curl -s https://storage.googleapis.com/qwasar-public/qwasar_my_square.tgz | tar zxvf - -C ./
It works exactly like yours should be working:

$>./qwasar_my_square 4 4
o--o
|  |
|  |
o--o
$>