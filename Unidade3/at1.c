#include <stdio.h>

void saudacao(char *nome) {
    printf("Ola, %s!\n", nome);
}

int main() {
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    saudacao(nome);
    return 0;
}