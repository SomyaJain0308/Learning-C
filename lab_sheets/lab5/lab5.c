# include <stdio.h>
# include <string.h>
# include <math.h>



// Problem #1 
void problem1() {
    int number;
    printf("Number: ");
    scanf("%d", &number);
    switch (number > 0) {
        case 1:
            printf("The number is positive.\n");
            break;
        case 0:
            switch (number < 0) {
                case 1:
                    printf("The number is negative.\n");
                    break;
                case 0:
                    printf("The number is zero.\n");
                    break;
            }
            break;
    }
}


// Problem #2
void problem2() {
    int number1, number2, choice;
    printf("Number #1: ");
    scanf("%d", &number1);
    printf("Number #2: ");
    scanf("%d", &number2);
    printf("Which operation would you like to perform?\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n%d + %d = %d\n", number1, number2, number1 + number2);
            break;
        case 2:
            printf("\n%d - %d = %d\n", number1, number2, number1 - number2);
            break;
        case 3:
            printf("\n%d * %d = %d\n", number1, number2, number1 * number2);
            break;
        case 4:
            if (number2 == 0) {
                printf("\nDivision by zero is not allowed.\n");
            } else {
                printf("\n%d / %d = %.2f\n", number1, number2, (float)number1 / number2);
            }
            break;
        case 5:
            if (number2 == 0) {
                printf("\nModulus by zero is not allowed.\n");
            } else {
                printf("\n%d %% %d = %d\n", number1, number2, number1 % number2);
            }
            break;
        default:
            printf("\nInvalid choice.\n");
    }
}


// Problem #3
void problem3() {
    printf("Equation: ax^2 + bx + c = 0\n");
    float a, b, c, discriminant, root1, root2;
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;
        case 0:
            switch (discriminant == 0) {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    printf("\nRoot 1 = Root 2 = %.2f\n", root1);
                    break;
                case 0:
                    printf("\nThe roots are complex and different.\n");
                    break;
            }
            break;
    }
}
    

// Problem #4
void problem4() {
    int month_number;
    printf("Month Number: ");
    scanf("%d", &month_number);
    switch (month_number) {
        case 1:
            printf("\nJanuary\n");
            break;
        case 2:
            printf("\nFebruary\n");
            break;
        case 3:
            printf("\nMarch\n");
            break;
        case 4:
            printf("\nApril\n");
            break;
        case 5:
            printf("\nMay\n");
            break;
        case 6:
            printf("\nJune\n");
            break;
        case 7:
            printf("\nJuly\n");
            break;
        case 8:
            printf("\nAugust\n");
            break;
        case 9:
            printf("\nSeptember\n");
            break;
        case 10:
            printf("\nOctober\n");
            break;
        case 11:
            printf("\nNovember\n");
            break;
        case 12:
            printf("\nDecember\n");
            break;
        default:
            printf("\nInvalid month number.\n");
    }
}


// Problem #5
void problem5() {
    char grade;
    printf("Grade: ");
    scanf(" %c", &grade);
    switch (grade) {
        case 'a':
        case 'A':
            printf("\nGood Job! You aced the test!\n");
            break;
        case 'b':
        case 'B':
            printf("\nGood Job! You passed the test!\n");
            break;
        case 'c':
        case 'C':
            printf("\nGood Job! You passed the test!\n");
            break;
        case 'd':
        case 'D':   
            printf("\nGood Job! You passed the test!\n");
            break;
        case 'f':
        case 'F':
            printf("\nYou failed the test. Better luck next time!\n");
            break;
        default:
            printf("\nInvalid grade.\n");
    }
}


// Problem #6
void problem6() {
    int number;
    printf("Number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}


// Problem #7
void problem7() {
    int number, remainder, sum = 0;
    printf("Number: ");
    scanf("%d", &number);
    while (number > 0) {
        remainder = number % 10;
        sum += remainder;
        number /=10;
    }
    printf("Sum of the digits = %d\n", sum);
}


// Problem #8
void problem8() {
    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("\nSum of odd numbers between 1 to n = %d\n", sum);
}


// Problem #9 I really don't understand what do we have to do in this question so i will leave this one.









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
    printf("=========================\nPROBLEM #7\n\n");
    problem7();
    printf("=========================\nPROBLEM #8\n\n");
    problem8();
}