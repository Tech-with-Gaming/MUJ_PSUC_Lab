#include <stdio.h>

int main() {

    int number = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number < 10) {
        printf("The number is less than 10!\n");
    }
    else if (number == 10) {
        printf("The number is equal to 10!\n");
    }
    else {
        printf("The number is greater than 10!\n");
    }

    return 0;
}
