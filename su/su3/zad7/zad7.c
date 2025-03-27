#include <stdio.h>


void findSum(int arr[], int N, int S);

int main(){
    int N;

    printf("Enter size of array: ");
    scanf("%d", &N);
    
    int arr[N];
    

    for(int i =0; i<N;i++){
        printf("Enter number: ");
        scanf("%d", &arr[i]);

    }
    int S;
    printf("Enter amount u want to check for: ");
    scanf("%d", &S);

    findSum(arr, N, S);

}
void findSum(int arr[], int N, int S){
    for(int start = 0; start<N; start++){
        int sum = 0;
        for(int end = start; end<N; end++){
            sum +=arr[end];


            if(sum == S){
                printf("Found subarray: ");
                for(int i = start; i <= end; i++){
                    printf("%d", arr[i]);
                }
            printf("\n");
            return;
            }
            


        }
    }
    printf("Not found subarray\n");
    return;
}