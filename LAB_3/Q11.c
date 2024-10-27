#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant 1.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant 2.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant 3.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant 4.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    } else {
        printf("The point (%d, %d) lies at the origin.\n", x, y);
    }

    return 0;
}