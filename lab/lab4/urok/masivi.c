#include <stdio.h>

int main(){
    int arr[15]; // imeto na masiva e pointer kum purviq element na masiva


    int masiv[4] = {}; // tova zanulqva vsichki elementi

    for (int i = 0; i<5; i++){
        printf("%d\n", masiv[i]); 
        printf("%p\n",&masiv[i]); // adresa na vsqka stoinost
    }

    //za da namerq duljinata na masiv:
    int lenght = sizeof(arr) / 4; // sizeof vrushta duljinata na masiva po razmera na elementtetite v masiva
// v sluchaq int e 4 bytes, koeto znachi 15*4 -> 15 * 4 / 4 -> duljinata


}          