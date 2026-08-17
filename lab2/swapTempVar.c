#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int temp = 0;

    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("a: %d\nb: %d\ntemp: %d\n", a, b, temp);
    return 0;
}