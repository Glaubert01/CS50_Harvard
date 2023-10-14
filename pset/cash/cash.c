#include <cs50.h>  // Adds Harvard CS50 course library
#include <math.h>  // Adds the library with mathematical operations to perform calculations
#include <stdio.h> // Adds the C Standard library

int main(void)
{
    float change;

    int penny, nickel, dime, quarter;  // Declaration of variables

    do
    {
        change = get_float("Digite o valor do troco: ");  // Let the user set the amount of change
    }
    while (change <= 0);  // Test if the change is higher than zero

    int cents = round(change * 100);  // Turns the amount of change in a integer 

    quarter = cents / 25; // It will calculate the amount of change divided by 25 cent coins
    dime = (cents - (quarter * 25)) /
           10; // It will calculate the remaining change after dividing by 25 cents, dividing by 10 cent coins
    nickel = (cents - (quarter * 25) - (dime * 10)) /
             5; // It will calculate what is left of the change by dividing it by 10 cents, dividing by 5 cent coins
    penny = (cents - (quarter * 25) - (dime * 10) - (nickel * 5)); // It will calculate the remaining change in 1 cent coins

    printf("%i\n", quarter + dime + nickel + penny);
}
