#include <stdio.h>

int main(){
    double x,y,x1,x2,y1,y2;
    double temp;
    while(1){
        printf("Enter x1: ");
        scanf("%lf", &x1);
        printf("Enter y1: ");
        scanf("%lf", &y1);
        printf("Enter x2: ");
        scanf("%lf", &x2);
        printf("Enter y2: ");
        scanf("%lf", &y2);
        printf("Enter x: ");
        scanf("%lf", &x);
        printf("Enter y: ");
        scanf("%lf", &y);
        if(x1 > x2 || y1 > y2){
            printf("Enter valid values, x1 < x2 and y1 < y2");
        }
        else{
            break;
        }
    }

    if(x1 <= x && x <= x2 && y1 <= y && y <= y2){
        printf("Inside\n");
        return;
    } 
    printf("Outside\n");

    
    

}