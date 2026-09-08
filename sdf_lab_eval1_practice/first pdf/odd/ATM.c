# include <stdio.h>

int main() {
    int balance = 25000, choice, deposit, withdraw;
    printf("===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Mini Statement\n");
    printf("5. Exit\n\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 5) {
            printf("\nInvalid choice! Please try again.\n");
            continue;
        }
        switch (choice) {
            case 1:
                printf("\nCurrent Balance: Rs. %d\n", balance);
                break;
            case 2:    
                printf("\nEnter deposit amount: ");
                scanf("%d", &deposit);
                if (deposit <= 0) {
                    printf("\nInvalid deposit amount!\n");
                    break;
                }
                if (deposit > 10000) {
                    printf("\nDeposit limit exceeded! Maximum deposit is Rs. 10000.\n");
                    break;
                }
                balance += deposit;
                printf("\nAmount deposited successfully!\n");
                printf("Current Balance: Rs. %d\n", balance);
                break;
            case 3:
                printf("\nEnter withdrawal amount: ");
                scanf("%d", &withdraw);
                if (withdraw <= 0) {
                    printf("\nInvalid withdrawal amount!\n");
                    break;
                }
                if (withdraw > balance) {
                    printf("\nInsufficient balance!\n");
                }
                else {
                    balance -= withdraw;
                    printf("\nWithdrawal Successful!\n");
                    printf("Current Balance: Rs. %d\n", balance);
                }
                break;
            case 4:
                printf("\nMini Statement:\n");
                printf("Current Balance: Rs. %d\n", balance);
                break;
            }
        }
    while (choice != 5);
    return 0;
};