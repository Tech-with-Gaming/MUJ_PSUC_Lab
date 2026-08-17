// F = (C * 9/5) + 32
// C = (F - 32) * 5/9
#include <stdio.h>

int main()
{
    float celsius = 0, fahrenheit = 0;
    

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // fahrenheit = (celsius * 9 / 5) + 32;
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit = %.2f Celsisus\n", fahrenheit, celsius);

    return 0;
}