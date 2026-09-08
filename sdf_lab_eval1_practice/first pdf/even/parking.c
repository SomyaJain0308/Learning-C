# include <stdio.h>
# include <string.h>

int main() {
    int choice, hours, additional_hours, base_charge, additional_hour_charge, penalty;
    char vehicle_type[20];

    printf("===== SMART PARKING SYSTEM =====\n");
    printf("1. Car\n");
    printf("2. Bike\n");
    printf("3. SUV\n");
    printf("4. Exit\n\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Please enter a value between 1 and 4.\n");
            continue;
        }
        switch (choice) {
            case 4:
                printf("Exiting ...\n");
                return 0;
            case 1:
                strcpy(vehicle_type, "Car");
                base_charge = 50;
                additional_hour_charge = 20;
                break;
            case 2:
                strcpy(vehicle_type, "Bike");
                base_charge = 20;
                additional_hour_charge = 10;
                break;
            case 3:
                strcpy(vehicle_type, "SUV");
                base_charge = 80;
                additional_hour_charge = 30;
                break;
        }
        printf("\nEnter parking hours: ");
        scanf("%d", &hours);
        if (hours < 1 || hours > 24) {
            printf("Invalid parking hours. Please enter a value between 1 and 24.\n");
            continue;
        }
        switch (hours) {
            case 1:
            case 2:
                penalty = 0;
                additional_hours = 0;
                break;
            case 3 ... 8:
                penalty = 0;
                additional_hours = hours - 2;
                break;
            case 9 ... 24:
                penalty = 100;
                additional_hours = hours - 2;
                break;
        }
        int base_charge = base_charge + (additional_hours * additional_hour_charge);
        int total_parking_fee = base_charge + penalty;
        printf("\n===== PARKING FEE DETAILS =====\n");
        printf("Vehicle Type: %s\n", vehicle_type);
        printf("Parking Duration: %d\n", hours);
        printf("Base Charge: %d\n", base_charge);
        printf("Penalty: %d\n", penalty);
        printf("Total Parking Fee: %d\n", total_parking_fee);
    } while (choice < 1 || choice > 4);
    return 0;
}