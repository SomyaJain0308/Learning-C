# include <stdio.h>


int main() {
    int number_of_transactions = 0, amount = 0, total_amount = 0, high_value_count = 0, highest_transaction = 0, lowest_transaction;
    printf("Enter number of transaction: ");
    scanf("%d", &number_of_transactions);
    for (int i = 0; i < number_of_transactions; i++) {
        printf("Enter transaction #%d amount: ", i + 1);
        scanf("%d", &amount);
         if (i == 0) {
            highest_transaction = amount;
            lowest_transaction = amount;
        }
        if (amount > 50000) {
            high_value_count++;
        }
        total_amount += amount;
        if (amount > highest_transaction) {
            highest_transaction = amount;
        }
        if (amount < lowest_transaction) {
            lowest_transaction = amount;
        }
    }
    printf("\nTotal Transaction Amount = Rs. %d\n", total_amount);
    printf("Highest Transaction = Rs. %d\n", highest_transaction);
    printf("Lowest Transaction = Rs. %d\n", lowest_transaction);
    printf("High-Value Transactions = %d\n", high_value_count);
    if (high_value_count <= 3) {
        printf("Account Status = Normal\n");
    } else {
        printf("Account status = High\n");
    }
    return 0;
}