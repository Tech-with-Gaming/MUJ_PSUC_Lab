#include <stdio.h>

int main() {

    double mm = 0.00, cm = 0.00, inch = 0.00, feet = 0.00;

    printf("Enter the distance in mm: ");
    scanf("%lf", &mm);

    cm = mm / 10;
    inch = mm * 0.0393701;
    feet = mm * 0.00328084;

    printf("%.2lf mm converted is:\n%.2lf cm\n%.2lf inches\n%.2lf feet\n", mm, cm, inch, feet);
    return 0;
}