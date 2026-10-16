#include <stdio.h>

int main() {
    char name[50];
    float hours, rate, regularPay, overtimePay, totalSalary;

    printf("Enter employee name: ");
    scanf(" %[^\n]", name);

    printf("Enter total hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    if (hours < 0 || rate < 0) {
        printf("Invalid hours or rate.");
    } else {
        if (hours <= 40) {
            regularPay = hours * rate;
            overtimePay = 0;
        } else {
            regularPay = 40 * rate;
            overtimePay = (hours - 40) * rate * 1.5;
        }

        totalSalary = regularPay + overtimePay;

        printf("\nEmployee Name: %s\n", name);
        printf("Regular Pay: %.2f\n", regularPay);
        printf("Overtime Pay: %.2f\n", overtimePay);
        printf("Total Salary: %.2f\n", totalSalary);
    }

    return 0;
}