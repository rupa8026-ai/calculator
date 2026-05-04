
#include <stdio.h>

int main()
{
	float num1, num2, result;
	char op;

	printf("Enter first number: ");
	scanf("%f", &num1); // The '&' tells C the memory address where to store the value

	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &op); // The space before %c is a C quirk to clear the buffer

	printf("Enter second number: ");
	scanf("%f", &num2);

	// LOGIC SECTION
	switch (op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
	case '/':
		if (num2 == 0)
		{
			printf("Error: Division by zero is not allowed.\n");
			return 1; // Exit with error code
		}
		result = num1 / num2;
		break;
	default:
		break;
	}
	printf("Result: %f", result);

	return 0;// Terminate with success code
}