#include <stdio.h>

int main(){

    char str1[15];
    char str2[15];
    int count1 = 0;
    int count2 = 0;

    int equal_count = 0;

    printf("Enter string 1: ");
    scanf("%s", &str1);

    printf("Enter string 2: ");
    scanf("%s", &str2);
    count1 = find_Lenght(str1, count1);
    count2 = find_Lenght(str2, count2);

    if(count1 == count2){
        // if(str1 == str2){
        //     printf("They are the same");
        // }
    

    for(int i = 0; str1 != '\0'; i++){
        if(str1[i] == str2[i]){
            equal_count++;
        }
    }
    if(equal_count == str1){
        printf("They are the same");
        return 0;
    }
    
    }

printf("They are not the same");


}

int find_Lenght(char str[], int count){
    for(char *ptr = str; *ptr != '\0'; ptr++){
        count++;
    }
    return count;
}