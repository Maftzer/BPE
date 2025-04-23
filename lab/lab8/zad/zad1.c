#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point p1;
    Point p2;
    Point p3;
} Triangle;


int main(){

}

double distance(Point a, Point b){
    return sqrt((b.x - a.x)*(b.x - a.x)+(b.y-a.y)*(b.y-a.y));
}


void printTriangleSides(Triangle t) {
    double a = distance(t.p1, t.p2);
    double b = distance(t.p2, t.p3);
    double c = distance(t.p3, t.p1);

    printf("Страни на триъгълника:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);
}


