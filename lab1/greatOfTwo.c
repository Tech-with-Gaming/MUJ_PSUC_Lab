#include <stdio.h>

int main() {

    int num1 = 0;
    int num2 = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is greater than %d!\n", num1, num2);
    }
    else if (num1 == num2) {
        printf("Both the numbers are equal!\n");
    }
    else {
        printf("%d is less than %d!\n", num2, num1);
    }

    return 0;
}