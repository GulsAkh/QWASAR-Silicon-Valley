#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_spaceship(char* param_1)
{
int x,y = 0;
int current_direction = 0;
char* directions[4] = {"up", "right", "down", "left"};
//               0       1       2        3 
for (int i=0;param_1[i] != '\0';i++) {
    if (param_1[i] == 'R') {
       current_direction += 1;
    } 
    else if (param_1[i] == 'L') {
       current_direction -= 1;
       if (current_direction == -1) {
       current_direction = 3;
       }
    } 
    else {
        if (current_direction == 0) {
        y--;
        }
        else if (current_direction == 1) {
        x++;
        }
        else if (current_direction == 2) {
        y++;
        } 
        else {
        x--;
        }
    }
    
    }
char* res = malloc(50);

snprintf(res, 50, "{x: %d, y: %d, direction: '%s'}", x-1, y, directions[current_direction]);

return res;
}

/*int main() {
char* str = "RAALALL";
my_spaceship(str);
}*/