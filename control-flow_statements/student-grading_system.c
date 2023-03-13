#include <stdio.h>

/**
* main - check code
*
* Return: Always 0.
*/
int main(void)
{
int marks;

printf("Enter your score: ");
scanf("%d", &marks);

if (marks <= 50)
{
printf("Fail\n");
}
else if (marks <= 65)
{
printf("Pass\n");
}
else if (marks <= 75)
{
printf("Merit\n");
}
else
{
printf("Distinction\n");
}
}
