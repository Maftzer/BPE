#include <stdio.h>


typedef struct{
    double grade;
    int classNumber;
    char name[40];
    
    

} Student;

typedef struct{
    Student Students[30];
    int ClassNumber;
    double classAverage;
    int numberStudents;

} Class;

typedef struct{
    Class Classes[3];
    int numberClasses;
    double vipuskAverage;

} Vipusk;




int main(){

}

void ClassAverage(Class *class){
    double sum = 0;
    for(int i = 0; i<class->numberStudents; i++){
        sum += class->Students[i].grade;

    }
    class->classAverage = sum / class->numberStudents;
}

void VipuskAverage(Vipusk *vipusk){
    double sum = 0;
    for(int i = 0; i<vipusk->numberClasses; i++){
        sum += vipusk->Classes[i].classAverage;
    }
    vipusk->vipuskAverage = sum / vipusk->numberClasses;

}

