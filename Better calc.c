#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
	double num0, num1, num2;
	char func;
	int cb=1;
	
	printf("Functions available for now: +, -, *, /, ^, v(square root), |(Absolute value), !\n");
	printf("Enter 'END' to stop.\n");
	
	while(cb!=0) {
	printf("\n");
	printf("Enter a function: ");
	scanf(" %c", &func);										//When we use scanf for char we put a space first
	
	if(func=='E'){
		cb=0;
	}
	
	else if(func=='+'||func=='-'||func=='*'||func=='/'||func=='^')
	{										
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
	
	else {
		printf("Enter a number: ");
		scanf("%lf", &num0);
		int i, num0fac=num0;
		double squareRoot = sqrt(num0);
		double absValue;
		switch(func){
			case'v':
				printf("%f\n", squareRoot);
				break;
			case'|':
				if(num0>=0) absValue=num0;
				else absValue=-num0;
				printf("|%.3f|=%.3f\n", num0, absValue);
				break;
			case'!':
				for(i=num0-1;i>=1;i--){
					num0fac=num0fac*i;
				}
				printf("%.0f!=%d",num0,num0fac);
				break;
			default:
				printf ("INVALID FUNCTION\n");
				printf("Functions available for now: +, -, *, /, ^, v(for square root)\n");	
		}
		}
	
	
	}

	return 0;
	
}


