# include <stdio.h>
# include <string.h>

int main() {
    int choice, quantity, cost, delivery, total;
    char food[10]; 
    
    printf("\n\nMenu:\n\n");
    printf("1. Pizza Rs.300 + Rs.40 delivery\n");
    printf("2. Burger Rs.180 + Rs.30 delivery\n");
    printf("3. Biryani Rs.250 + Rs.25 delivery\n");
    printf("4. Dessert Rs.150 + Rs.20 delivery\n\n\n");
    
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("\nEnter quantity: ");
    scanf("%d", &quantity);
    printf("\n\n");

    switch (choice) {
        case 1:
            strcpy(food, "Pizza");
            cost = 300;
            delivery = 40;
            break;
        case 2:
            strcpy(food, "Burger");
            cost = 180;
            delivery = 30;
            break;
        case 3:
            strcpy(food, "Biryani");
            cost = 250;
            delivery = 25;
            break;
        case 4:
            strcpy(food, "Dessert");
            cost = 150;
            delivery = 20;
            break;
    }
    
    printf("=================================\n");
    printf("Item: %s\n", food);
    printf("Food Cost = Rs. %d\n", cost * quantity);
    printf("Delivery Charge = Rs. %d\n", delivery);
    printf("Total Amount = Rs. %d", cost * quantity + delivery);
    
}