// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <stdio.h>
int main(){
    int a ,b ,c;
    printf("ENTER LENGTH OF FIRST SIDE : ");
    scanf("%d",&a);
    printf("ENTER LENGTH OF SECOND SIDE : ");
    scanf("%d",&b);
    printf("ENTER LENGTH OF THIRD SIDE : ");
    scanf("%d",&c);
    if (a == b && b == c){
        printf("TRIANGE IS EQUILATERAL");
    }else if (a == b || b == c || c == a ){
        printf("TRIANGLE IS ISOSCELES");
    }else{
        printf("TRIANLGE IS SCALENE");
    }
}