#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_strchr(char* word_1, char word_2) {
char* str1 = malloc(sizeof (char) * 50);
int i, j, k = 0;
char* str2;
for(i=0; word_1[i]!='\0'; i++){
if(word_1[i]==word_2) {
for(j=i; word_1[j]!='\0'; j++){
str1[k] = word_1[j];
k++;
//break;
}
return str1;
} 

}
return 0;
}

/*int main() {
printf("%s\n", my_strchr("abcabc", 'f'));
return 0;
}*/