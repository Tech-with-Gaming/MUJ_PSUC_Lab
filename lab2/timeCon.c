#include <stdio.h>

int main() {

    int secs = 0;
    int hrs = 0;
    int mins = 0;

    printf("Enter the time in seconds: ");
    scanf("%d", &secs);

    hrs = secs /  3600;
    mins = secs / 60;

    printf("%d seconds in hours is: %dhr\n", secs, hrs);
    printf("%d seconds in hours is: %dmins\n", secs, mins);

    return 0;
}