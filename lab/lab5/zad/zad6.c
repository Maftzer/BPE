#include <stdio.h>

int main(){
    char str[15];

    printf("Enter string: ");
    scanf("%s", &str);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >='A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase string: %s", str);
}