#include <cs50.h>  // Adiciona a biblioteca do CS50
#include <stdio.h>  // Adiciona a biblioteca standard

int main(void)
{

    // get_string é uma função específica da biblioteca do CS50!

    string nome = get_string("Qual é seu nome? \n");
    printf("Olá, %s \n", nome);
}
