#include <stdio.h>

int main() {
    int idade;
    float peso;
    int dosagem, gotas;

    printf("Digite sua Idade: \n");
    scanf("%d", &idade);

    printf("Digite seu Peso: \n");
    scanf("%f", &peso);

    if (idade >= 12) {
        if (peso >= 60) {
            dosagem = 1000;
            gotas = 40;
        } else {
            dosagem = 875;
            gotas = 35;
        }
    }
    else if (idade < 12) {
        if (peso >= 5 && peso <= 9) {
            dosagem = 125;
            gotas = 5;
        } else if (peso > 9 && peso <= 16) {
            dosagem = 250;
            gotas = 10;
        } else if (peso > 16 && peso <= 24) {
            dosagem = 375;
            gotas = 15;
        } else if (peso > 24 && peso <= 30) {
            dosagem = 500;
            gotas = 20;
        } else if (peso > 30) {
            dosagem = 750;
            gotas = 30;
        }
    }

    printf("A sua Dosagem eh: %dmg\n", dosagem);
    printf("Que sao %d gotas\n", gotas);

    return 0;
}