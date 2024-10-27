//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER LENGTH OF FIRST SIDE :");
    scanf("%d",&a);
    printf("ENTER LENGTH OF SECOND SIDE :");
    scanf("%d",&b);
    printf("ENTER LENGTH OF THIRD SIDE :");
    scanf("%d",&c);
    if (a>b+c || b>a+c || c > a+c ){
        printf("IT IS VALID");
    }else{
        printf("IT IS NOT VALID");
    }
}