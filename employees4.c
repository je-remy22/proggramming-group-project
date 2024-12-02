#include <stdio.h>

int main() {
    float gross_pay, tax_payable, net_pay, tax_rate;
    int dependants;

    printf("Enter gross pay: ");
    scanf("%f", &gross_pay);
    printf("Enter number of dependants: ");
    scanf("%d", &dependants);
if function
    if (gross_pay < 10000) {
        tax_rate = 0;
    } else if (gross_pay <= 20000 && dependants > 3) {
        tax_rate = 0.15;
    } else if (gross_pay <= 20000) {
        tax_rate = 0.10;
    } else if (dependants > 3) {
        tax_rate = 0.35;
    } else {
        tax_rate = 0.25;
    }

    tax_payable = gross_pay * tax_rate;
    net_pay = gross_pay - tax_payable; 

    printf("The gross pay is %.2f \n", gross_pay);
    printf("The tax payable is %.2f \n", tax_payable);
    printf("The net pay is %.2f \n", net_pay);

    return 0;
}
