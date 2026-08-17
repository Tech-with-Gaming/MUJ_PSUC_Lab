#include <stdio.h>
#include <math.h>

int main() {

    float x1 = 0.00, y1 = 0.00, x2 = 0.00, y2 = 0.00;
    float distance = 0.00;

    printf("Enter the x1 and y1 co-ordinates: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the x2 and y2 co-ordinates: ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance is: %.2f", distance);

    return 0;
}