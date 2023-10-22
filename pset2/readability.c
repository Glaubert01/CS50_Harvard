#include <cs50.h>   // Adds the CS50 library to the algorithm
#include <ctype.h>  // Adds the CType library to the algorithm
#include <stdio.h>  // Adds the Stdio library to the algorithm
#include <string.h> // Adds the String library to the algorithm

int main(void)
{

    string text = get_string("Text: "); // Get a text input from user

    int letters = 0, words = 1, sentences = 0;    // Declaration of variables
    for (int i = 0, n = strlen(text); i < n; i++) // Loop to verify into the text how many letters, words and sentences it have
    {
        char current = text[i]; // Declaration of a variable that will go through every char in the text
        if (isalpha(current))   // Tests if the current char of the text is a alphabet character
        {
            letters++;
        }
        else if (current == ' ') // Tests if the current char of the text is a space between words
        {
            words++;
        }
        else if (current == '.' || current == '!' ||
                 current ==
                     '?') // Tests if the current char of the text is a . or a ! or a ? that means the end of current sentence
        {
            sentences++;
        }
    }

    float coef = 100 / (float) words; // Declaration of a variable to make the calculation of "L" in the Coleman-Liau Index
    float l = coef * letters;         // Calculate the value of "L"
    float s = coef * sentences;       // Calculate the value of "S"

    float index = 0.0588 * l - 0.296 * s - 15.8; // Calculate the result of the analysis about the readibility of the text

    if (index > 16) // Tests to determinate which grade the thext belongs
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
}
