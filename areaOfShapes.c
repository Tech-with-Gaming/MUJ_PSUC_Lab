#include <stdio.h>
#include <math.h>

int main() {

    char choice = '\0';
    const double pi = 3.141592653589;

    printf("ENter your choice [c/r/t]: ");
    scanf("%c", choice);

    switch (choice) {
        case 'c':
            float radius = 0, circleArea = 0;
            printf("Enter the radius: ");
            scanf("%f", &radius);

            circleArea = pi * pow(radius, 2);
            printf("Area of the circle is: %.2lfm²\n", circleArea);
            break;

        case 'r':
            float length = 0, breadth = 0, recArea = 0;

            printf("Enter the length: ");
            scanf("%f", &length);

            printf("Enter the breadth: ");
            scanf("%f", &breadth);

            recArea = length * breadth;
            printf("The area of the rectangle is: %.2fm²\n", recArea);
            break;

        case 't':
            float a = 0, b = 0, c = 0;

            printf("Enter the sides [a b c]: ");
            scanf("%f %f %f", &a, &b, &c);

            if ((a + b > c) && (b + c > a) && (c + a > b)) {
                float s = (a + b + c) / 2;
                float area = sqrt(s * (s - a) * (s - b) * (s - c));

                printf("The area of the triangle is: %.2fm²\n", area);
            }
            else {
                printf("The sides don't meet the criteria!\n");
            }
            break;
    }
    return 0;
}