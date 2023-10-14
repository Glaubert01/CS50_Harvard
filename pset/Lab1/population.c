#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years = 0;
    int display = 0;

    do
    {
        start = get_int("Type the start size of the population: ");
        display = start;
        if (start <= 8)
        {
            printf("Please type a number higher than 9\n");
        }
    }
    while (start <= 8);

    do
    {
        end = get_int("Type the end size of the population: ");
        if (end < start)
        {
            printf("Please type a number higher than the start size of the population\n");
        }
    }
    while (end < start);

    while (start < end)
    {
        int born = start / 3;
        int dead = start / 4;
        start = start + born - dead;
        years++;
    }

    // printf("The amount of time needed to grow the population from %i to %i is: %i years\n", display, end, years);
    printf("Years: %i \n", years);
}

