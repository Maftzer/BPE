#include <stdio.h>

int main(){

    // int a = 1;
    // double d = 0.5;
    // char c = 'a';
    // printf("%d", a);


    // int arr[5];
    // int len = sizeof(arr) / sizeof(int); // ili na vtoriq sizeof moje da e sizeof(arr[0]);


    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for (int i =0; i< 3; i++){
        for(int j = 0; j<3; j++){
            printf("%d", arr[i][j]);
            if(i<j){
            sum +=arr[i][j];
            }
        }
        printf("\n");

    }
    printf("Sum: %d\n", sum);


}