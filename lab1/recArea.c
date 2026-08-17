#include <stdio.h>

int main() {

    float length = 0, breadth = 0, area = 0;

    printf("Enter the length of the Rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the Rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    printf("The area of the Rectangle is: %fm²\n", area);

    return 0;
}