/*
a = 10
b = 20
a = a + b => a = 30
b = a - b => b = 10
a = a - b => a = 20
*/

#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\nb: %d\n", a, b);
    return 0;
}