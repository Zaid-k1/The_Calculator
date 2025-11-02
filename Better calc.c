#include<stdio.h>
#include<stdlib.h>
/*int main() {
	
	double num2;
	double num1;
	char func;
	
	printf("Enter first number: ");
	scanf("%lf", &num1);                                       //When we use scanf for doubles we use %lf
	printf("Enter a function: ");
	scanf(" %c", &func);                                       //When we use scanf for char we put a space first
	printf("Enter second number: ");
	scanf("%lf", &num2);
	
	double sum = num1 + num2;
	double sub = num1 - num2;
	double mult = num1 * num2;
	double div = num1 / num2;
	
	if (func == '+') {
		printf("%f", sum);
	}
	
	else if (func == '-') {
		printf("%f", sub);
	}
	
	else if (func == '*') {
		printf("%f", mult);
	}
	
	else if (func == '/') {
		printf ("%f", div);
	}
	
	else {
		printf ("Invalid function,\n");
		printf ("Please enter on of the (+, -, * or /) functions.");
		
	}
	
	return 0;
	
} //yo

