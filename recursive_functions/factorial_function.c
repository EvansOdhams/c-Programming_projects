#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

//Define the function
int factorial(int n)
{
	if ( n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
	int n;

	//prompt the user to enter an integer
	printf("Enter a positive integer: ");
	scanf("%d", &n);

	//check if the input is negative or greater than 20
	
	while (n < 0 || n > 20)
	{
		if (n < 0)
		{
			printf("Error: The input must be a positive integer\n");
		}
		else
		{
			printf("The input must be less than or equal to 20\n");
		}
		printf("Enter a new integer: ");
		scanf("%d", &n);
	}

	//calculate the factorial of 'n' using recursive function
	int result = factorial(n);

	//print the result to the console
	printf("%d! = %d\n", n ,result);

	return 0;
}
