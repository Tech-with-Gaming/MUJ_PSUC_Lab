#include <stdio.h>
#include <math.h>

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    double root1 = 0;
    double root2 = 0;

    printf("Enter the coefficient of xsquared: ");
    scanf("%lf", &a);

    printf("Enter the coefficient of x: ");
    scanf("%lf", &b);

    printf("Enter the value of c: ");
    scanf("%lf", &c);    


    if (a == 0) {
        printf("Coefficient 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    double discriminant = (b * b) - (4 * a * c);

    // Discriminant is >= for non complex roots!
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("The roots are: %.2lf and %.2lf\n", root1, root2);

    // Discriminant is < 0 for complex roots!
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("The roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", 
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}