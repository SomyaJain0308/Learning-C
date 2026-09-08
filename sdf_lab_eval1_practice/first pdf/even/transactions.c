# include <stdio.h>
# include <string.h>


int main() {
    int amount = 0, total_amount = 0, consecutive_risk = 0, normal_count = 0, medium_count = 0, high_count = 0, suspicious_count = 0;
    do {
        char category[20];
        printf("Enter transaction amount: ");
        scanf("%d", &amount);
        if (amount <= 0) {
            printf("Invalid amount. Please enter a positive value.\n");
            continue;
        }
        if (amount > 10000) {
            consecutive_risk++;
        } else {
            consecutive_risk = 0;
        }
        if (consecutive_risk >= 3) {
            printf("\nWARNING: Three consecutive high-risk transactions detected.\n");
            printf("Account Temporarily Blocked.\n");
            break;
        }
        total_amount += amount;
        if (total_amount > 100000) {
            total_amount -= amount;
            printf("\nWARNING: Total transaction amount exceeds limit.\n");
            printf("Account Temporarily Blocked.\n");
            break;
        }
        switch (amount) {
            case 1 ... 2000:
                strcpy(category, "Normal");
                normal_count++;
                break;
            case 2001 ... 10000:
                strcpy(category, "Medium Risk");
                medium_count++;
                break;
            case 10001 ... 50000:
                strcpy(category, "High Risk");
                high_count++;
                break;
            case 50001 ... 100000:
                strcpy(category, "Suspicious");
                suspicious_count++;
                break;
        }
        printf("Transaction: %d\n", amount);
        printf("Category: %s\n\n", category);
    } while (1);
    printf("Total transaction amount: %d\n\n", total_amount);
    printf("Normal transactions: %d\n", normal_count);
    printf("Medium risk transactions: %d\n", medium_count);
    printf("High risk transactions: %d\n", high_count);
    printf("Suspicious transactions: %d\n", suspicious_count);
    printf("\nTransaction processing terminated.\n");
}