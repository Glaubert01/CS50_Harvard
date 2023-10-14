#include <cs50.h>  // Adds CS50 library
#include <stdio.h>  // Adds the Standard library


int main(void)
{

    // get_string is a specific function from the CS50 library!
    
    string name = get_string("What's your name? \n");
    printf("Hello, %s \n", name);
}
