#include <stdio.h>

int main () 
{
char j1, j2;

printf("Pedra(R), Papel(P), Tesoura(S)\n");

printf("Qual sua escolha Jogador 1 ?: \n");
scanf(" %c", &j1);

printf("Qual sua escolha Jogador 2 ?: \n");
scanf(" %c", &j2);

if ((j1 == 'R' && j2 == 'S') ||
    (j1 == 'P' && j2 == 'R') ||
    (j1 == 'S' && j2 == 'P'))
{
    printf("O jogador 1 venceu !!!");
}
else if ((j2 == 'R' && j1 == 'S') ||
    (j2 == 'P' && j1 == 'R') ||
    (j2 == 'S' && j1 == 'P'))
    {
        printf("O jogador 2 venceu !!!");
    }
else if (j2 == j1)
{
    printf ("Deu empate");
}
    return 0;
}