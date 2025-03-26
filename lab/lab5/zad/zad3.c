#include <stdio.h>

int main(){

    char str[15];
    int count[256] = {0};
    
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != '\n'){
            count[(int)str[i]]++;
        }
    }
    for(int i = 0; i < 256; i++){
        if(str[i] > 0){
        printf("%c is found %d times", i, count[i]);
        }
    }
}