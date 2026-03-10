#include <stdio.h>

int main () {

//pratos
int escolhaprato, veg = 180, peixe = 230, frango = 250, carne = 350;

//sobremesas
int escolhasobremesa, abac = 75, sorvdiet = 110, moussediet = 170, moussechoc = 200;

//bebidas
int escolhabebidas, cha = 20, sucolaranja = 70, sucomelao = 100, refridiet = 65;

int calorias;

 printf("----- CARDAPIO -----\n");
    printf("\n--- PRATOS ---\n");

    printf("1 - Vegetariano\n");
    printf("2 - Peixe\n");
    printf("3 - Frango\n");
    printf("4 - Carne\n");

    printf("Escolha seu prato: ");
    scanf("%d", &escolhaprato);

if (escolhaprato == 1) {
    escolhaprato = veg;
}
else if (escolhaprato == 2){
    escolhaprato = peixe;
}
else if (escolhaprato == 3){
    escolhaprato = frango;
}
else if (escolhaprato == 4){
    escolhaprato = carne;
}

printf("\n--- SOBREMESAS ---\n");

    printf("1 - Abacaxi\n");
    printf("2 - Sorvete Diet\n");
    printf("3 - Mousse Diet\n");
    printf("4 - Mousse Chocolate\n");

    printf("Escolha sua sobremesa: ");
    scanf("%d", &escolhasobremesa);

    if (escolhasobremesa == 1) {
    escolhasobremesa = abac;
}
else if (escolhasobremesa == 2){
    escolhasobremesa = sorvdiet;
}
else if (escolhasobremesa == 3){
    escolhasobremesa = moussediet;
}
else if (escolhasobremesa == 4){
    escolhasobremesa = moussechoc;
}

printf("\n--- BEBIDAS ---\n");

    printf("1 - Cha\n");
    printf("2 - Suco de Laranja\n");
    printf("3 - Suco de Melao\n");
    printf("4 - Refrigerante Diet\n");

    printf("Escolha sua bebida: ");
    scanf("%d", &escolhabebidas);

    if (escolhabebidas == 1) {
    escolhabebidas = cha;
}
else if (escolhabebidas == 2){
    escolhabebidas = sucolaranja;
}
else if (escolhabebidas == 3){
    escolhabebidas = sucomelao;
}
else if (escolhabebidas == 4){
    escolhabebidas = refridiet;
}

calorias = escolhaprato + escolhasobremesa + escolhabebidas;

printf("As calorias totais desse prato eh:%d\n", calorias);

    return 0;
}