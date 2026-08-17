#include <stdio.h>
#include <math.h>

int main() {

    const double pi = 3.141592653589;
    double radius = 0.00;
    double area = 0.00;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * (pow(radius, 2));
    printf("The area of the circle is: %.2lfm²\n", area);

    return 0;
}