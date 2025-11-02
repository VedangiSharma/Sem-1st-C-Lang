#include <stdio.h>

int main() {
    double x, y;

    printf("Enter the X coordinate: ");
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the Y coordinate: ");
    if (scanf("%lf", &y) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (x == 0.0 && y == 0.0) {
        printf("The point (%.2f, %.2f) is at the Origin.\n", x, y);
    } else if (x == 0.0) {
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    } else if (y == 0.0) {
        printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
    } else if (x > 0.0 && y > 0.0) {
        printf("The point (%.2f, %.2f) lies in Quadrant I.\n", x, y);
    } else if (x < 0.0 && y > 0.0) {
        printf("The point (%.2f, %.2f) lies in Quadrant II.\n", x, y);
    } else if (x < 0.0 && y < 0.0) {
        printf("The point (%.2f, %.2f) lies in Quadrant III.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) lies in Quadrant IV.\n", x, y);
    }

    return 0;
}