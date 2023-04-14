#include <stdio.h>
#include <stdlib.h>

int is_digit_string(char *str) {
    // Check if a string is composed only of digits
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char **argv) {
    if (argc != 3 || !is_digit_string(argv[1]) || !is_digit_string(argv[2])) {
        // Print an error message and exit with a status of 98
        printf("Error\n");
        return 98;
    }

    // Convert the arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Multiply the numbers and print the result
    printf("%d\n", num1 * num2);

    return 0;
}
