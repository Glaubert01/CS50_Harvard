#include <cs50.h>  // Adds CS50 library
#include <stdio.h>  // Adds the Standard library

int main(void)
{
    int i, j, n;  // Declaration of variables

    do
    {
        n = get_int("Digite a altura da pirâmide entre 1 e 8: ");  // Get a number from user between a limit
    }
    while (n < 1 || n > 8);  // Test if the number that the user typed is between the expected limits

    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--) // print the spaces
            printf(" ");
        for (j = 1; j <= i; j++) // print the #
            printf("#");
        printf("\n");
    }
}
