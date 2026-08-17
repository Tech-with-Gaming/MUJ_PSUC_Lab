#include <stdio.h>

int main() {

    int a = 0, b = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);

    a = a + b; // a = 30
    b = a - b; // b = 10
    a = a - b; // a = 20

    printf("a: %d\nb: %d\n", a, b);
    return 0;
}