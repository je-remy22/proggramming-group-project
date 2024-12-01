#include <stdio.h>

int main() {
    char next_customer;

    do {
        int credit_limit, price, quantity, total_value;

        printf("Enter credit limit: ");
        scanf("%d", &credit_limit);
        printf("Enter price of item: ");
        scanf("%d", &price);
        
        do {
            printf("Enter quantity of items: ");
            scanf("%d", &quantity);

            total_value = price * quantity;

            if (total_value > credit_limit) {
                printf("Sorry, you cannot purchase goods worth such a value on credit.Re-enter lower quantity\n");
            } else {
                printf("Thank you for purchasing from us. \n");
            }
        } while (total_value > credit_limit);
       
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &next_customer);

    } while (next_customer == 'y');

    return 0;
}
