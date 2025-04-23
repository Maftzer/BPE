#include <stdio.h>
#include <stdlib.h>



void add(int **arr, int *size, int x);
void deleteX(int **arr, int *size, int x);
void smallest(int **arr, int size, int x);

int main(){
    int size;
    
    int x = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter x");
    scanf("%d", &x);

    int *arr = (int*)malloc(sizeof(int) * size);
    int choice = 0;
    printf("Which function u want to use:\n1.Add\n2.Remove\n3.Smallest");
    switch (choice)
    {
    case 1:
        add(*arr, &size, x);
        break;
    case 2:
        deleteX(*arr, &size, x);
        break;
    case 3:
        smallest(*arr, size, x);
        break;
    default:
        break;
    }
}

void add(int **arr, int *size, int x){
    *arr = (int*)realloc(arr, (*size + 1) * sizeof(int));
    arr[*size + 1] = x;
    *size++;

}

void deleteX(int **arr, int *size, int x){
    for(int i = 0; i<*size; i++){
        if(arr[i] == x){
            for(int j = i; j<*size-1; j++){
                while(j<*size-1)
                arr[j] = arr[j+1];
            }
            arr = (int*)realloc(arr, (*size-1)*sizeof(int));
            size--;
        }
    }
}

