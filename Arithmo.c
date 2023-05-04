#include <stdio.h>

int main(){
	char operation;
	float num1, num2, result;
	int exit = 0;

		
	printf("Hello, I am Arithmo,  please enter your equation:\n"); // Arithmo Introduction

		while (!exit) {
			scanf("%f %c %f", &num1, &operation, &num2);
				if (operation == '+'){
				result = num1 + num2;
			        } else if (operation == '-'){
				result = num1 - num2;
				} else if (operation == '*'){
				result = num1 * num2;
				} else if (operation == '/'){
				result = num1 / num2;
				} 
			printf("The result is %f\n", result);
			}

	return(0);
}
