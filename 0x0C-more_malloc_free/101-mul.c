#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if either number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
    int i, isn1 = 1, isn2 = 1;

    for (i = 0; argv[1][i]; i++)
        if (argv[1][i] != '0')
        {
            isn1 = 0;
            break;
        }

    for (i = 0; argv[2][i]; i++)
        if (argv[2][i] != '0')
        {
            isn2 = 0;
            break;
        }

    if (isn1 == 1 || isn2 == 1)
    {
        printf("0\n");
        exit(0);
    }
}

/**
 * _initialize_array - sets memory to zero in a new array
 * @array: char array.
 * @length: length of the char array.
 *
 * Return: pointer to a char array.
 */
char *_initialize_array(char *array, int length)
{
    int i = 0;

    for (i = 0; i < length; i++)
        array[i] = '0';
    array[length] = '\0';
    return (array);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @num_row: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int num_row)
{
    int num_len;

    for (num_len = 0; argv[num_row][num_len]; num_len++)
        if (!isdigit(argv[num_row][num_len]))
        {
            printf("Error\n");
            exit(98);
        }

    return (num_len);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
    int num1_len, num2_len, result_len, add, addl, i, j, k, carry;
    char *result;

    // Check if the program was called with the correct number of arguments
    if (argc != 3)
        printf("Error\n"), exit(98);

    // Check if either number is zero
    _is_zero(argv);

    // Determine the lengths of the input numbers
    num1_len = _checknum(argv, 1);
    num2_len = _checknum(argv, 2);

    // Initialize the result array
    result_len = num1_len + num2_len;
    result = malloc(result_len + 1);
    if (result == NULL)
        printf("Error\n"), exit(98);
    result = _initialize_array

