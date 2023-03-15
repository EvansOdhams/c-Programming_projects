#include <stdio.h>

#define PAY_RATE 120.00  // Define the basic pay rate per hour
#define OVERTIME_RATE 1.5  // Define the overtime rate
#define TAX_RATE_1 0.15  // Define the tax rate for the first tax bracket
#define TAX_RATE_2 0.20  // Define the tax rate for the second tax bracket
#define TAX_RATE_3 0.25  // Define the tax rate for the third tax bracket
#define TAX_BRACKET_1 30000.00  // Define the income threshold for the first tax bracket
#define TAX_BRACKET_2 45000.00  // Define the income threshold for the second tax bracket

int main() {
    float hours, gross_pay, taxes, net_pay;

    // Ask the user to enter the number of hours worked in a week
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hours);

    // Calculate the gross pay based on the number of hours worked
    if (hours <= 40.0) {
        gross_pay = hours * PAY_RATE;
    } else {
        gross_pay = 40.0 * PAY_RATE + (hours - 40.0) * PAY_RATE * OVERTIME_RATE;
    }

    // Calculate the taxes based on the gross pay
    if (gross_pay <= TAX_BRACKET_1) {
        taxes = gross_pay * TAX_RATE_1;
    } else if (gross_pay <= TAX_BRACKET_2) {
        taxes = TAX_BRACKET_1 * TAX_RATE_1 + (gross_pay - TAX_BRACKET_1) * TAX_RATE_2;
    } else {
        taxes = TAX_BRACKET_1 * TAX_RATE_1 + (TAX_BRACKET_2 - TAX_BRACKET_1) * TAX_RATE_2 + (gross_pay - TAX_BRACKET_2) * TAX_RATE_3;
    }

    // Calculate the net pay
    net_pay = gross_pay - taxes;

    // Display the gross pay, taxes, and net pay
    printf("Gross Pay: Ksh %.2f\n", gross_pay);
    printf("Taxes: Ksh %.2f\n", taxes);
    printf("Net Pay: Ksh %.2f\n", net_pay);

    return 0;
}

