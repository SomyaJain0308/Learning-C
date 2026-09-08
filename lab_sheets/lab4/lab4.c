# include <stdio.h>
# include <string.h>



// Problem #1
void problem1() {
    int number1, number2;
    printf("Number #1: ");
    scanf("%d", &number1);
    printf("Number #2: ");
    scanf("%d", &number2);
    if (number1 > number2) {
        printf("\n%d is greater than %d\n", number1, number2);
    } else if (number1 < number2) {
        printf("\n%d is less than %d\n", number1, number2);
    } else {
        printf("\n%d is equal to %d\n", number1, number2);
    }
}



// Problem #2
void problem2() {
    int number;
    printf("Number: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("\n%d is a positive number\n", number);
    } else if (number < 0) {
        printf("\n%d is a negative number\n", number);
    } else {
        printf("\n%d is neither positive or negative\n", number);
    }
}



// Problem #3
void problem3() {
    int number;
    printf("Number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("\n%d is an even number\n", number);
    } else {
        printf("\n%d is an odd number\n", number);
    }
}



// Problem #4
void problem4() {
    char alphabet;
    printf("Alphabet: ");
    scanf(" %c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        printf("\n%c is a vowel\n", alphabet);
    } else {
        printf("\n%c is a consonant\n", alphabet);
    }
}



// Problem #5
void problem5() {
    int age;
    printf("Age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("\nYou are eligible to vote!\n");
    } else {
        printf("\nYou are not eligible to vote!\n");
    }
}


// Problem #6
void problem6() {
    int year;
    printf("Year: ");
    scanf("%d", &year);
    if (year % 4 != 0) {
        printf("\n%d is not a leap year\n", year);
    } else if (year % 100 != 0) {
        printf("\n%d is a leap year\n", year);
    } else if (year % 400 != 0) {
        printf("\n%d is not a leap year\n", year);
    } else {
        printf("\n%d is a leap year\n", year);
    }
}




// Problem #7
void problem7() {
    int computer, sst, math, english, hindi;
    printf("Input marks of Computer: ");
    scanf("%d", &computer);
    printf("Input marks of SST: ");
    scanf("%d", &sst);
    printf("Input marks of Math: ");
    scanf("%d", &math);
    printf("Input marks of English: ");
    scanf("%d", &english);
    printf("Input marks of Hindi: ");
    scanf("%d", &hindi);
    int total = computer + sst + math + english + hindi;
    int percentage = (int)total / 5;
    switch (percentage) {
        case 80 ... 100:
            printf("\nGrade: A\n");
            break;
        case 70 ... 79:
            printf("\nGrade: B\n");
            break;
        case 60 ... 69:
            printf("\nGrade: C\n");
            break;
        case 40 ... 59:
            printf("\nGrade: D\n");
            break;
        default:
            printf("\nGrade: F\n");
    }
}




// Problem #8
void problem8() {
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


// Problem #9
void problem9() {
    int basic_salary, hra, da, gross_salary;
    printf("Input basic salary: ");
    scanf("%d", &basic_salary);
    switch (basic_salary) {
        case 0 ... 10000:
            hra = basic_salary * 0.2;
            da = basic_salary * 0.8;
            break;
        case 10001 ... 20000:
            hra = basic_salary * 0.25;
            da = basic_salary * 0.9;
            break;
        default:
            hra = basic_salary * 0.3;
            da = basic_salary * 0.95;
    }
    gross_salary = basic_salary + hra + da;
    printf("\nGross Salary = %d\n", gross_salary);
}



// Problem #10
void problem10() {
    int sidea, sideb, sidec;
    printf("Side A: ");
    scanf("%d", &sidea);
    printf("Side B: ");
    scanf("%d", &sideb);
    printf("Side C: ");
    scanf("%d", &sidec);
    if (sidea + sideb > sidec && sideb + sidec > sidea && sidec + sidea > sideb) {
        printf("\nThe triangle is valid\n");
    } else {
        printf("\nThe triangle is not valid\n");
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
    printf("=========================\nPROBLEM #7\n\n");
    problem7();
    printf("=========================\nPROBLEM #8\n\n");
    problem8();
    printf("=========================\nPROBLEM #9\n\n");
    problem9();
    printf("=========================\nPROBLEM #10\n\n");
    problem10();
}