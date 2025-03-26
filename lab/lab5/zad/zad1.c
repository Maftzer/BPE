#include <stdio.h>

int main(){
    int count = 0;
    char str[15];
    int i = 0;

    printf("Enter string: ");
    scanf("%s", &str);

    for(char *ptr = str; *ptr != '\0'; ptr++){
        count++;
    }
    printf("The lenght is: %d\n", count);
}