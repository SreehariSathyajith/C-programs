//Write a C program to count total number of notes in given amount
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i ;
    printf("ENTER AMOUNT : ");
    scanf("%d",&a);
    b = a / 500;
    a = a - 500*b;
    c = a / 100;
    a = a - 100*c;
    d = a / 50;
    a = a - 50*d;
    e = e / 20;
    a = a - 20*e;
    f = a / 10;
    a = a - 10*f;
    g = a / 5;
    a = a - 5*g;
    h = a / 2;
    a = a - 2*h;
    i = a / 1;
    printf("TOTAL NUMBER OF 500 NOTES : %d\n",b);
    printf("TOTAL NUMBER OF 100 NOTES : %d\n",c);
    printf("TOTAL NUMBER OF 50 NOTES : %d\n",d);
    printf("TOTAL NUMBER OF 20 NOTES : %d\n",e);
    printf("TOTAL NUMBER OF 10 NOTES : %d\n",f);
    printf("TOTAL NUMBER OF 5 NOTES : %d\n",g);
    printf("TOTAL NUMBER OF 2 NOTES : %d\n",h);
    printf("TOTAL NUMBER OF 1 NOTES : %d\n",i);

}