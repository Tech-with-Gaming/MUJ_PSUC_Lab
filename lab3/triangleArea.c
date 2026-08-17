#include <stdio.h>
#include <math.h>

int main() {

    float a = 0, b = 0, c = 0;

    printf("Enter the sides a b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is: %.2fm²\n", area);
    }
    else {
        printf("The sides don't clear the criteria!\n");
    }

    return 0;
}