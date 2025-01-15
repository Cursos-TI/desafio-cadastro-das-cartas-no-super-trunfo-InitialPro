#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char pais1[100];
    char estado1[100];
    char cidade1deestado1[100];
    float populacaocidade1deestado1;
    float areacidade1deestado1;
    float pibcidade1deestado1;
    int pontosturisticoscidade1deestado1;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome do primeiro País:\n");
    scanf("%s", pais1);

    printf("Digite o nome do primeiro Estado:\n");
    scanf("%s", estado1);

    printf("Digite o nome da primeira Cidade:\n");
    scanf("%s", cidade1deestado1);

    printf("Digite a população da primeira Cidade:\n");
    scanf("%f", &populacaocidade1deestado1);

    printf("Digite a Área da primeira Cidade:\n");
    scanf("%f", &areacidade1deestado1);

    printf("Digite o PIB da primeira Cidade:\n");
    scanf("%f", &pibcidade1deestado1);

    printf("Pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosturisticoscidade1deestado1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("País: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("Primeira Cidade: %s\n", cidade1deestado1);
    printf("População da primeira cidade: %f\n", populacaocidade1deestado1);
    printf("Área da primeira cidade: %f\n", areacidade1deestado1);
    printf("PIB da primeira Cidade: %f\n", pibcidade1deestado1);
    printf("Pontos turísticos da primeira cidade: %d\n", pontosturisticoscidade1deestado1);


    return 0;
}
