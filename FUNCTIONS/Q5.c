#include <stdio.h>
int findMax(int a, int b, int c) {
    int max = a; 
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;  
    }

    return max; 
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int maximum = findMax(num1, num2, num3);
    printf("The maximum of %d, %d, and %d is %d.\n", num1, num2, num3, maximum);

    return 0;
}