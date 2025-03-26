#include <stdio.h>

int main(){
    float inch;
    char choice;
    float converted;
    printf("Hello, how many inches you want to convert: ");
    scanf("%f", &inch);

    printf("And to which unit you want to convert\n1- mm\n2- cm\n3- dm\n4- m\n");
    
    scanf(" %c", &choice);

    
    switch (choice)
    {
    case '1':
        converted = inch * 25.4;
        printf("%.3f inches is %.3f mm\n", inch, converted);
        break;
    case '2':
        converted = inch * 2.54;
        printf("%.3f inches is %.3f cm\n", inch, converted);
        break;
    case '3':
        converted = inch * 0.254;
        printf("%.3f inches is %.3f dm\n", inch, converted);
        break;
    case '4':
        converted = inch * 0.0254;
        printf("%.3f inches is %.3f m\n", inch, converted);
        break;
    }

}