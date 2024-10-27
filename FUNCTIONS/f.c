#include <stdio.h>
int main(){
    int a,x,y;
    printf("ENTER NUMBER:");
    scanf("%d",&a);
    x = 0;//factors
    y = 1;//divisors
    while(x<3 && y<=a){
        if (a%y==0){
            x++;
            y++;
        }else{
            y++;}}
    if (x>2){
        printf("composite");
    }else{
        printf("prime");}
}
    
