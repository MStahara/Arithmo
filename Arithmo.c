#include <stdio.h>

int main() {
  char operation;
  float num1, num2, result, check;
  int exit = 0;

  printf("Hello, I am Arithmo,  please enter your equation:\n"); // Arithmo
                                                                 // Introduction

  while (!exit) {
    check = scanf("%f %c %f", &num1, &operation, &num2);
	if (check == 3) {
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
		break;
    }
    printf("The result is %f\n", result);
    }
	else {
	 printf("Something went wrong!\n");
		break;
	}
}
	return (0); 
}
