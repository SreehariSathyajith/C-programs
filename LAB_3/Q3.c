#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num %2 ==  0) {
        printf("%d is a even number.\n", num);
    } else {
        printf("The number is a odd nuber.\n");
    }
    return 0;
}