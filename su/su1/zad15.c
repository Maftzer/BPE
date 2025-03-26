#include <stdio.h>

int main(){

    double N, W, L, M, O;

    printf("Enter size for N: ");

    scanf("%lf", &N);

    printf("Enter size of W and L: ");
    scanf("%lf %lf", &W, &L);

    printf("Enter size of M and O: ");
    scanf("%lf %lf", &M, &O);

    double platformArea = N*N;
    double benchArea = M*O;
    double tileArea = W*L;

    double coverArea = platformArea - benchArea;
    double tilesNeeded = coverArea / tileArea;
    double timeNeeded = tileArea *0.2;

    printf("Tiles needed: %.2lf\n", tilesNeeded);
    printf("Time needed: %.2lf", timeNeeded);

}