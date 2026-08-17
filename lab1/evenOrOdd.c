// Even or Odd program!
#include <stdio.h>

int main() {

    int num = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is Even!\n");
    }
    else {
        printf("Number is Odd!\n");
    }

    return 0;
}