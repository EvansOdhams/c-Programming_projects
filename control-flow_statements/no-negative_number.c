#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter an Integer: ");
	scanf("%d", &number);

	if(number < 0)
		printf("You have entered\n");
	else
		printf("You have entered a positive number");
return (0);
}
