#include <stdio.h>

int main(){
    int n;
    int number;

    char count_p1 = 0;
    char count_p2 = 0;
    char count_p3 = 0;
    char count_p4 = 0;
    char count_p5 = 0;
    char total_count = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &number);
        if(number < 1 || number > 1000){
            printf("Not a valid value for the number(1-1000)");
            return;
        }
        if(number < 200){
            count_p1++;
        }
        if(number >= 200 && number < 400){
            count_p2++;
        }
        if(number >=400 && number <600){
            count_p3++;
        }
        if(number >= 600 && number <800){
            count_p4++;
        }
        if(number >= 800){
            count_p5++;
        }
    }
    total_count = count_p1 + count_p2 +count_p3 +count_p4 +count_p5;
    count_p1 = (count_p1 / total_count) * 100;
    count_p2 = (count_p2 / total_count) * 100;
    count_p3 = (count_p3 / total_count) * 100;
    count_p4 = (count_p4 / total_count) * 100;
    count_p5 = (count_p5 / total_count) * 100;
    printf("The percent of the first is: %d%c", count_p1, 37);
    printf("The percent of the second is: %d%c", count_p2, 37);
    printf("The percent of the third is: %d%c", count_p3, 37);
    printf("The percent of the forth is: %d%c", count_p4, 37);
    printf("The percent of the fifth is: %d%c", count_p5, 37);
}