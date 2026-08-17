#include <stdio.h>

int main() {
  
    float P = 0, R = 0, T = 0;

    printf("Enter the Principal amount: ");
    scanf("%f", &P);

    printf("Enter the Rate: ");
    scanf("%f", &R);

    printf("Enter the Time Period: ");
    scanf("%f", &T);

    float SI = (P * T * R) / 100;

    printf("Simple Interest = %.2f\n", SI);
    return 0;
}