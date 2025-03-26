#include <stdio.h>

void func(int *p){
    *p = 21;
}

int main(){
    int var = 20;
    func(&var);
    printf("value of var variable: %d\n", var);

}