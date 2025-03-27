// #include <stdio.h>

// int main(){
//     int N;

//     printf("Enter size of array: ");
//     scanf("%d", &N);
    
//     int arr[N];
    

//     for(int i =0; i<N;i++){
//         printf("Enter number: ");
//         scanf("%d", &arr[i]);

//     }


// }
// void findLenght(int arr[], int N, int k){
//     int k_temp = k;
//     int k_index = 0;
//     for(int start = 0; start<N; start++){
//         int max = arr[start];
//         for(int end = start+1; end<N; end++){
//             if(arr[end]>arr[start]){
//                 max = arr[end];
//                 k_temp--;
//                 if(k_temp == 0){
//                     k_index = end;
//                 } 
//             }
            
            
            


//         }
//     }
//     printf("Not found subarray\n");
//     return;
// }