// Sum of two numbers
#include <stdio.h>

int main() {

  int num1 = 0, num2 = 0;
  int sum = 0;

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  sum = num1 + num2;
  printf("The sum of %d and %d is: %d\n", num1, num2, sum);

  return 0;
}
