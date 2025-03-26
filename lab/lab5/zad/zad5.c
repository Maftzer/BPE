#include <stdio.h>
#include <ctype.h>

int main(){
    char str[15];
    int count = 0;

    printf("Enter string: ");
    scanf("%s", &str);
    tolower(str);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    printf("The number of vowels is: %d", count);
}