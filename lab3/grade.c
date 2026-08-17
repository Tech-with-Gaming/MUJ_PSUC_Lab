#include <stdio.h>

int main() {

    int score = 0;
    
    printf("Please enter the grade: ");
    scanf("%d", &score);

    if (score == 10 || score == 9) {
        printf("Your grade is 'A'!\n");
    }
    else if (score == 8 || score == 7) {
        printf("Your grade is 'B'!\n");
    }
    else if (score == 6 || score == 5) {
        printf("Your grade is 'C'!\n");
    }
    else if (score == 4 || score == 3) {
        printf("Your grade is 'D'!\n");
    }
    else if (score < 3) {
        printf("Your grade is 'F'!\n");
    }
    else {
        printf("Invalid score!\n");
    }

    return 0;
}