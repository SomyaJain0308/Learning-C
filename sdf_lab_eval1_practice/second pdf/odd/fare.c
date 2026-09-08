# include <stdio.h>
# include <string.h>

int main() {
    char type[10];
    int vehicle = 0, distance = 0, travel_time = 0, cost = 0, night_charge = 0;
    printf("1. Mini     Rs.12/km\n");
    printf("2. Sedan    Rs.18/km\n");
    printf("3. SUV      Rs.25/km\n");
    printf("4. Premium  Rs.35/km\n");
    printf("\nEnter vehicle type: ");
    scanf("%d", &vehicle);
    printf("\nEnter distance: ");
    scanf("%d", &distance);
    printf("\nEnter travel time (1-Day / 2-Night): ");
    scanf("%d", &travel_time);
    switch (vehicle) {
        case 1:
            cost = 12;
            strcpy(type, "Mini");
            break;
        case 2:
            cost = 18;
            strcpy(type, "Sedan");
            break;
        case 3:
            cost = 25;
            strcpy(type, "SUV");
            break;
        case 4:
            cost = 35;
            strcpy(type, "Premium");
            break;
    }
    if (travel_time = 2) {
        night_charge = 50;
    }
    
    printf("\nVehicle: %s\n", type);
    printf("Distance: %d\n", distance);
    printf("Base Fare = Rs. %d\n", cost * distance);
    printf("Night Surcharge = Rs. %d\n", night_charge);
    printf("Total Fare = Rs. %d", cost * distance + night_charge);
    
    return 0;
}