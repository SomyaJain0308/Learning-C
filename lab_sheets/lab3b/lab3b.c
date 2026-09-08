# include <stdio.h>
# include <string.h>



// Problem #1
void problem1() {
    printf("######\n");
    printf("#\n");
    printf("#\n");
    printf("#####\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
}



// Problem #2
void problem2() {
    int height = 7;
    int width = 5;
    printf("Perimeter of the rectangle = %d inches\n", 2 * (height + width));
    printf("Area of the rectangle = %d square inches\n", height * width);
}




// Problem #3
void problem3() {
    char employee_id[10];
    int working_hours = 0, salary_amount = 0;
    printf("Input the Employess ID(Max. 10 chars): ");
    scanf("%s", &employee_id);
    printf("\nInput the working hrs: ");
    scanf("%d", &working_hours);
    printf("\nSalary amount/hr: ");
    scanf("%d", &salary_amount);
   
    printf("\n\n\nEmployees ID = %s", employee_id);
    printf("\nSalary = U$ %d.00\n", salary_amount * working_hours);
}



// Problem #4
void problem4() {
    int amount;
    printf("Input the amount: ");
    scanf("%d", &amount);
    int hundred = amount / 100;
    amount = amount % 100;
    int fifty = amount / 50;
    amount = amount % 50;
    int twenty = amount / 20;
    amount = amount % 20;
    int ten = amount / 10;
    amount = amount % 10;
    int five = amount / 5;
    amount = amount % 5;
    int two = amount / 2;
    amount = amount % 2;
    int one = amount / 1;
   
    printf("\nThere are:\n\n");
    printf("%d Note(s) of 100.00\n", hundred);
    printf("%d Note(s) of 50.00\n", fifty);
    printf("%d Note(s) of 20.00\n", twenty);
    printf("%d Note(s) of 10.00\n", ten);
    printf("%d Note(s) of 5.00\n", five);
    printf("%d Note(s) of 2.00\n", two);
    printf("%d Note(s) of 1.00\n", one);
}




// Problem #5
void problem5() {
    int input_days;
    printf("Input no. of days: ");
    scanf("%d", &input_days);
    int years = input_days / 365;
    input_days = input_days % 365;
    int months = input_days / 30;
    input_days = input_days % 30;
    printf("\n\n%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", input_days);
}




// Problem #6
void problem6() {
    int number1, number2;
    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");
    printf("Input first number of the pair: ");
    scanf("%d", &number1);
    printf("\nInput second number of the pair: ");
    scanf("%d", &number2);
    if (number2  > number1) {
        printf("\nThe pair is in ascending order!\n");
    } else {
        printf("\nThe pair is in descending order!\n");
    }
   
}






void main() {
    printf("=========================\nPROBLEM #1\n\n");
    problem1();
    printf("=========================\nPROBLEM #2\n\n");
    problem2();
    printf("=========================\nPROBLEM #3\n\n");
    problem3();
    printf("=========================\nPROBLEM #4\n\n");
    problem4();
    printf("=========================\nPROBLEM #5\n\n");
    problem5();
    printf("=========================\nPROBLEM #6\n\n");
    problem6();
}