# include <stdio.h>
# include <stdlib.h>
# define MAX_SIZE 100

void problem1() {
    int rows, i, j;

    printf("Input rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        for (j = 1; j < i; j++) {
            printf(" ");
        }

        for (j = i; j <= rows; j++) {
            printf("*");
        }

        printf("\n");
    }
}



void problem2() {
    long long num = 0, number = 0;
    int digit = 0, num_digits = 0, zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
    printf("Input any number: ");
    scanf("%lld", &num);

    number = num;
    while (number > 0) {
        number = number / 10;
        num_digits++;
    }

    for (int i = 0; i < num_digits; i++) {
        digit = num % 10;
        switch (digit) {
            case 0:
                zero++;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
        }
        num = num / 10;
    }
    printf("\nFrequency of 0 = %d", zero);
    printf("\nFrequency of 1 = %d", one);
    printf("\nFrequency of 2 = %d", two);
    printf("\nFrequency of 3 = %d", three);
    printf("\nFrequency of 4 = %d", four);
    printf("\nFrequency of 5 = %d", five);
    printf("\nFrequency of 6 = %d", six);
    printf("\nFrequency of 7 = %d", seven);
    printf("\nFrequency of 8 = %d", eight);
    printf("\nFrequency of 9 = %d\n", nine);
}


void problem3 () {
    int number, factor;
    printf("Input any number: ");
    scanf("%d", &number);

    printf("Prime factors:\n");

    for (int i = 2; i < number; i++) {
        if (number % i != 0) {
            continue;
        } else {
            for (int j = 2; j <= i; j++) {
                if (i == 2) {
                    printf("2\n");
                    break;
                }
                if (i % j == 0) {
                    break;
                } else {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
}



void problem4 () {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);
    printf("\n");

    for (int i = 0; i < rows; i++) {
        for (int j = rows - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}



void problem5 () {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);
    printf("\n");

    for (int i = 0; i < rows; i++) {
        for (int x = rows - i; x > 0; x--) {
            printf("*");
        }
        for (int y = 1; y <= 2 * i + 1; y++) {
            printf(" ");
        }
        for (int z = rows - i; z > 0; z--) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < rows; i++) {
        for (int x = 0; x <= i; x++) {
            printf("*");
        }
        for (int y = 2 * (rows - i) - 1; y > 0; y--) {
            printf(" ");
        }
        for (int z = 0; z <= i; z++) {
            printf("*");
        }
        printf("\n");
    }
}



void problem6 () {
    int arr[MAX_SIZE], arr_size = 0, counter = 1;
    printf("Enter number of elements you want to insert in the array: ");
    scanf("%d", &arr_size);
    printf("Enter elements of array:\n");
    for (int i = 0; i < arr_size; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < arr_size; j++) {
        for (int k = j + 1; k < arr_size; k++) {
            if (arr[j] == arr[k]) {
                counter++;
                arr[k] = arr[arr_size - 1];
                arr_size--;
                k--;
            }
        }
        printf("%d occurs %d time/s\n", arr[j], counter);
        counter = 1;
    }
}




void problem7 () {
    int arr[MAX_SIZE], arr_size = 0;
    printf("Enter number of elements you want to insert in the array: ");
    scanf("%d", &arr_size);
    printf("Enter elements of array:\n");
    for (int i = 0; i < arr_size; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int zero = arr[0];
    for (int i = 0; i < arr_size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[arr_size - 1] = zero;
}



void problem8 () {
    int arr[MAX_SIZE], arr_size = 0, total = 0, average = 0, above_avg = 0, cons_seq = 0, high_cons_seq = 0, first = 0, second = 0;
    printf("N: ");
    scanf("%d", &arr_size);
    printf("Enter marks of students:\n");
    for (int i = 0; i < arr_size; i++) {
        printf("Student #%d: ", i + 1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    average = total / arr_size;
    for (int i = 0; i < arr_size; i++) {
        if (i == 0) {
            first = arr[0];
            second = arr[0];
        }
        if (arr[i] < first && arr[i] > second) {
            second = arr[i];
        }
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        if (arr[i] > average) {
            above_avg++;
            cons_seq++;
            if (cons_seq > high_cons_seq) {
                high_cons_seq = cons_seq;
            }
        } else {
            cons_seq = 0;
        }
    }
    printf("\nClass Average: %d", average);
    printf("\nHighest: %d", first);
    printf("\nSecond-Highest: %d", second);
    printf("\nNumber of students scoring above average: %d", above_avg);
    printf("\nLongest consecutive sequence of students who scored above average: %d", cons_seq);
}



void problem9 () {
    int arr[MAX_SIZE], arr_size = 0;
    printf("Enter number of elements you want to insert in the array: ");
    scanf("%d", &arr_size);
    printf("Enter elements of array:\n");
    for (int i = 0; i < arr_size; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Equilibrium Indices: \n");
    for (int i = 0; i < arr_size; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += arr[j];
        }
        for (int j = i + 1; j < arr_size; j++) {
            right_sum += arr[j];
        }
        if (left_sum == right_sum) {
            printf("%d\n", i);
        }
    }
}





void problem10 () {
    int arr[MAX_SIZE], arr_size = 0, repeating = 0, missing_num = 0;
    printf("Enter number of elements you want to insert in the array: ");
    scanf("%d", &arr_size);
    printf("Enter elements of array:\n");
    for (int i = 0; i < arr_size; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arr_size; i++) {
        int missing = 0;
        for (int j = 1; j < arr_size; j++) {
            if (arr[i] == arr[j]) {
                repeating = arr[j];
                break;
            }
        }
    }

    for (int i = 0; i < arr_size; i++) {
        int found = 1;
        for (int j = 1; j <= arr_size; j++) {
            if (arr[i] == j) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            missing_num = arr[i];
            break;
        }
    }
    printf("\nRepeating = %d\n", repeating);
    printf("\nMissing = %d\n", missing_num);
}



void problem11 () {
    int arrA[MAX_SIZE], arr_size = 0;
    printf("Enter number of elements you want to insert in the array: ");
    scanf("%d", &arr_size);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < arr_size; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arrA[i]);
    }

    int arrB[MAX_SIZE];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < arr_size; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arrB[i]);
    }

    for (int j = 1; j < arr_size; j++) {
        int zero = arrA[j];
        for (int i = 0; i < arr_size - 1; i++) {
            arrA[i] = arrA[i + 1];
        }
        arrA[arr_size - j - 1] = zero;
        if (arrA == arrB) {
            printf("Circular Rotation");
            return;
        }
    }
}







void main() {
    printf("====================\n");
    printf("     Problem #1     \n");
    printf("====================\n");
    // problem1();
    printf("====================\n");
    printf("     Problem #2     \n");
    printf("====================\n");
    // problem2();
    printf("====================\n");
    printf("     Problem #3     \n");
    printf("====================\n");
    // problem3();
    printf("====================\n");
    printf("     Problem #4     \n");
    printf("====================\n");
    // problem4();
    printf("====================\n");
    printf("     Problem #5     \n");
    printf("====================\n");
    // problem5();
    printf("====================\n");
    printf("     Problem #6     \n");
    printf("====================\n");
    // problem6();
    printf("====================\n");
    printf("     Problem #7     \n");
    printf("====================\n");
    // problem7();
    printf("====================\n");
    printf("     Problem #8     \n");
    printf("====================\n");
    // problem8();
    printf("====================\n");
    printf("     Problem #9     \n");
    printf("====================\n");
    // problem9();
    printf("====================\n");
    printf("     Problem #10     \n");
    printf("====================\n");
    // problem10();
    // printf("I can't solve this question without sorting or another array for the missing part\n");
    printf("====================\n");
    printf("     Problem #11     \n");
    printf("====================\n");
    problem11();
    printf("====================\n");
    printf("     Problem #12     \n");
    printf("====================\n");
    // problem12();
    printf("====================\n");
    printf("     Problem #13     \n");
    printf("====================\n");
    // problem13();
    printf("====================\n");
    printf("     Problem #14     \n");
    printf("====================\n");
    // problem14();
    printf("====================\n");
    printf("     Problem #15     \n");
    printf("====================\n");
    // problem15();

}
