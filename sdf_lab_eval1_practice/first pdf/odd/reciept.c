#include <stdio.h>
#include <stdbool.h>

int main() {
    int customers = 0, customer_id = 0, products = 0, price = 0, discount = 0, total_amount = 0, highest_order_value = 0, highest_purchase_customer_id = 0, total_revenue = 0;
    bool delivery_charge = true;
    while (1) {
        printf("👥 Enter number of customers: ");
        scanf("%d", &customers);
        if (customers <= 0) {
            printf("\nInvalid number of customers! Please try again.\n");
            continue;
        }
        for (int i = 0; i < customers; i++) {
            total_amount = 0;
            printf("\n\n🆔 Enter Customer ID: ");
            scanf("%d", &customer_id);
            if (customer_id <= 0) {
                printf("\nInvalid customer ID! Please try again.\n");
                continue;
            }
            printf("\n🔢 Enter number of products: ");
            scanf("%d", &products);
            if (products <= 0) {
                printf("\nInvalid number of products! Please try again.\n");
                continue;
            }
            printf("\n\n");
            for (int i = 0; i < products; i++) {
                printf("💵  Enter price of product %d: Rs. ", i + 1);
                scanf("%d", &price);
                if (price <= 0) {
                    printf("\nInvalid price! Please try again.\n");
                    i--;
                    continue;
                }
                total_amount += price;
                total_revenue += price;
                switch (total_amount) {
                    case 0 ... 4999:
                        discount = 0;
                        delivery_charge = true;
                        break;
                    case 5000 ... 9999:
                        discount = 10;
                        delivery_charge = true;
                        break;
                    default:
                        discount = 20;
                        delivery_charge = false;
                        break;
                }
            }
            printf("\n\n");
            printf("====================================\n");
            printf("Customer ID: %d\n", customer_id);
            printf("Order Value: Rs. %d\n", total_amount);
            printf("Discount: Rs. %d\n", total_amount * discount / 100);
            if (delivery_charge) {
                printf("Delivery Charge: Rs. 100\n");
            } 
            else {
                printf("Delivery Charge: Free\n");
            }
            
            printf("====================================\n");
            }
    printf("\n\n\n====================================\n");

    printf("Highest Purchase Customer: %d\n", highest_purchase_customer_id);
    printf("Highest Order Value: Rs. %d\n", highest_order_value);
    printf("Total Revenue: Rs. %d\n", total_revenue);
    
    return 0;
    };
};