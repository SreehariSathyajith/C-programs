//9. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
#include <stdio.h>
int main(){
    double a , b , c , d , e ,f,g;
    printf("ENTER MARKS OF PHYSICS:");
    scanf("%lf",&a);
    printf("ENTER MARKS OF BIOLOGY:");
    scanf("%lf",&b);
    printf("ENTER MARKS OF CHEMISTRY:");
    scanf("%lf",&c);
    printf("ENTER MARKS OF MATHS:");
    scanf("%lf",&d);
    printf("ENTER MARKS OF COMPUTER SCIENCE:");
    scanf("%lf",&e);
    f = a + b +c + d+ e;
    g = f/5;
    if (g>=90){
        printf("YOUR GRADE IS A ");
    }else if (g >= 80){
        printf("YOUR GRADE IS B ");
    }else if (g >= 70){
        printf("YOUR GRADE IS C ");
    }else if (g>=60){
        printf("YOUR GRADE IS D");
    }else if (g >=40){
        printf("YOUR GRADE IS E ");
    }else {
        printf("YOUR GRADE IS F ");
    }
}