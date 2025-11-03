#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
	
	double num2;
	double num1;
	double num0;
	char func;
	int zaid = 6;
	
	
	printf("Functions available for now: +, -, *, /, ^, v(for square root)\n");
	while(zaid == 6) {
	printf("Enter a function: ");
	scanf(" %c", &func);										//When we use scanf for char we put a space first
	if (func != 'v') {										
	printf("Enter first number: ");
	scanf("%lf", &num1);                                       //When we use scanf for doubles we use %lf                                 
	printf("Enter second number: ");
	scanf("%lf", &num2);
	
	double sum = num1 + num2;
	double sub = num1 - num2;
	double mult = num1 * num2;
	double div = num1 / num2;
	double power = pow(num1, num2);
	
	switch (func) {
		
		case '+' :
			printf("%.2f + %.2f = %.3f\n", num1, num2, sum);
			break;
		case '-' :
			printf("%.2f - %.2f = %.3f\n", num1, num2, sub);
			break;
		case '*' :
			printf("%.2f * %.2f = %.3f\n", num1, num2, mult);
			break;
		case '/' :
			printf("%.2f / %.2f = %.3f\n", num1, num2, div);
			break;
		case '^' :
			printf("%.2f ^ %.2f = %.3f\n", num1, num2, power);
			break;
		default :
			printf ("INVALID FUNCTION\n");
			printf("Functions available for now: +, -, *, /, ^, v(for square root)\n");
	}
	}
	else if (func == 'v') {
		printf("Enter a number: ");
		scanf("%lf", &num0);
		double squareRoot = sqrt(num0);
		printf("%f\n", squareRoot);
	}
	else {
		printf ("INVALID FUNCTION\n");
		printf("Functions available for now: +, -, *, /, ^, v(for square root)\n");
	}
	}
	return 0;
	
}


