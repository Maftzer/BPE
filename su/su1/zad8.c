#include <stdio.h>


int main(){

    float leva;
    char choice;
    float converted;
    printf("Hello, how many leva you want to convert: ");
    scanf("%f", &leva);

    printf("And to which currency you want to convert\n1 - dollars\n2 - euro\n3 - pounds\n");
    
    scanf(" %c", &choice);

    
    switch (choice)
    {
    case '1':
        converted = leva * 0.54;
        printf("%.2f leva is %.2f dollars\n", leva, converted);
        break;
    case '2':
        converted = leva * 0.51;
        printf("%.2f leva is %.2f euro\n", leva, converted);
        break;
    case '3':
        converted = leva * 0.42;
        printf("%.2f leva is %.2f pounds\n", leva, converted);
        break;
    }

}