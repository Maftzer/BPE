#include <stdio.h>


int main(){
    int friends[100000][1000000]; 
    int friendCount[1000000];
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        
        friends[a][friendCount[a]++] = b;

        
        friends[b][friendCount[b]++] = a;
    }

   
    int person;
    printf("Въведи номер на човек: ");
    scanf("%d", &person);

    printf("Човек %d има %d приятели: ", person, friendCount[person]);
    for (int i = 0; i < friendCount[person]; i++) {
        printf("%d ", friends[person][i]);
    }
    printf("\n");

    return 0;
}