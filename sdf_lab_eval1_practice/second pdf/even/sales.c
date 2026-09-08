# include <stdio.h>

int main() {
    int days = 0, sales, streak_count = 0, total_sales = 0, highest_sales = 0, lowest_sales, longest_streak_count = 0, rolling_avg_sales = 0, days_above_average = 0;
    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("\nEnter daily sales: ");
    printf("\n\n");
    
    for (int i = 0; i < days; i++) {
        printf("\n");
        scanf("%d", &sales);
        total_sales += sales;
        if (i == 0) {
            highest_sales = sales;
            lowest_sales = sales;
            longest_streak_count = 0;
        }
        if (sales > highest_sales) {
            highest_sales = sales;
        }
        if (sales < lowest_sales) {
            lowest_sales = sales;
        }
        if (sales > 50000) {
            streak_count ++;
        } else {
            streak_count = 0;
        }
        if (streak_count > longest_streak_count) {
            longest_streak_count = streak_count;
        }
        rolling_avg_sales = total_sales / (i + 1);
        if (sales > rolling_avg_sales) {
            days_above_average++;
        }
    }
    int average_sales = total_sales / days;
    
    printf("\n\n\nTotal Sales = Rs. %d\n", total_sales);
    printf("Average Sales = Rs. %d\n", average_sales);
    printf("Highest Sales = Rs. %d\n", highest_sales);
    printf("Lowest Sales = Rs. %d\n", lowest_sales);
    printf("Days Above Average = %d\n", days_above_average);
    printf("Longest Streak Above Rs. 50000 = %d days\n", longest_streak_count);
    if (total_sales > 500000) {
        printf("Target Status = Achieved\n");
    } else {
        printf("Target Status = Failed\n");
    }
}