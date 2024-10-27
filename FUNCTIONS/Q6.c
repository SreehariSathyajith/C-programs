#include <stdio.h>
float absoluteValue(float x) {
    if (x < 0) {
        return -x; 
    }
    return x;  
}

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    float absValue = absoluteValue(num);
    printf("The absolute value of %.2f is %.2f.\n", num, absValue);

    return 0;
}