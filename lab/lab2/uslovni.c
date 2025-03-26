#include <stdio.h>

int main(){
    int x = 0;

    scanf("%d", &x);

    if(x == 0){
        printf("x e ravno na 0\n");
    }
    else if (x>0){
        printf("x e po-golqmo ot 0\n");
    }
    else if (x<0){
        printf("x e po-malko ot 0\n");

    }
    else{
        printf("x ne e chislo\n");
    }
    
}