#include <cs50.h>  // Adiciona a biblioteca CS50 
#include <stdio.h>  // Adiciona a biblioteca Standard 

int main(void)
{
    int i, j, n;  // Declaração das variáveis

    do
    {
        n = get_int("Digite a altura da pirâmide entre 1 e 8: ");  // Loop para aceitar o input do usuário com valores limite
    }
    while (n < 1 || n > 8);

    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--) // imprime os espaços
            printf(" ");
        for (j = 1; j <= i; j++) // imprime os #
            printf("#");
        printf("\n");
    }
}
