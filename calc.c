#include <stdio.h>
void sum(){
    int x,y,sum;
    printf("ENTER YOUR FIRST NUMBER:");
    scanf("%d",&x);
    printf("ENTER YOUR SECOND NUMBER:");
    scanf("%d",&y);
    sum = x+y;
    printf("SUM OF %d and %d is %d",x,y,sum);
}
void diff(){
    int x,y,diff;
    printf("ENTER YOUR FIRST NUMBER:");
    scanf("%d",&x);
    printf("ENTER YOUR SECOND NUMBER:");
    scanf("%d",&y);
    diff = x-y;
    printf("DIFFERENCE OF %d and %d is %d",x,y,diff);
}
void mul(){
    int x,y,mul;
    printf("ENTER YOUR FIRST NUMBER:");
    scanf("%d",&x);
    printf("ENTER YOUR SECOND NUMBER:");
    scanf("%d",&y);
    mul = x*y;
    printf("PRODUCT OF %d and %d is %d",x,y,mul);
}
void div(){
    float x,y,div;
    printf("ENTER YOUR FIRST NUMBER:");
    scanf("%f",&x);
    printf("ENTER YOUR SECOND NUMBER:");
    scanf("%f",&y);
    div = x/y;
    printf("QUOTIEN OF %f and %f is %f",x,y,div);

}
int main(){
    int a ;
    printf("1 : SUM\n");
    printf("2 : DIFFERENCE\n");
    printf("3 : PRODUCT\n");
    printf("4 : QUOTIENT\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&a);
    switch(a){
        case 1:
            sum();
            break;
        case 2:
            diff();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
    }
}