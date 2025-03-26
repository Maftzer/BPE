#include <stdio.h>

int main(){
    int count = 1;
    char str[15];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(char *ptr = str; *ptr !='\0'; ptr++){
        if(*ptr == ' '){
            count++;
        }
    }
    printf("The number of words is: %d\n", count);
}