#include <stdio.h>

float perform_operation(float result, float num1, char operation, float num2) {
  if (operation == '+') {
    result = num1 + num2;
  } else if (operation == '-') {
    result = num1 - num2;
  } else if (operation == '*') {
    result = num1 * num2;
  } else if (operation == '/') {
    result = num1 / num2;
  } else if (operation == '^') {
    printf("Keh?\n");
  }
  printf("the result is %f\n", result);
  return 0;
}

int main() {
  char operation;
  float num1, num2, result, check;
  int exit = 0;

  printf("Hello, I am Arithmo,  please enter your equation:\n");

  while (!exit) {
    check = scanf("%f %c %f", &num1, &operation, &num2);
    if (check != 3) {
      printf("Something Went Wrong!");
      break;
    } else
      perform_operation(result, num1, operation, num2);
  }
  return 0;
}
