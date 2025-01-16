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
    double pibcidade1deestado1;
    int pontosturisticoscidade1deestado1;
    float densidadepopulacionalcidade1estado1;
    float divisaopibpercapitacidade1estado1;

    char estado2[100];
    char cidade1deestado2[100];
    float populacaocidade2deestado2;
    float areacidade2deestado2;
    double pibcidade2deestado2;
    int pontosturisticoscidade2deestado2;
    float densidadepopulacionalcidade2estado2;
    float divisaopibpercapitacidade2estado2;

    // Poder Especial das Cartas
    long long int poderespecialcidade1;
    long long int poderespecialcidade2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Estado1
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
    scanf("%lf", &pibcidade1deestado1);

    printf("Pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosturisticoscidade1deestado1);

    printf("Digite a densidade Populacional: \n");
    scanf("%f", &densidadepopulacionalcidade1estado1);

    // Estado 2

    printf("Digite o nome da segunda Cidade:\n");
    scanf("%s", cidade1deestado2);

    printf("Digite a população da segunda Cidade:\n");
    scanf("%f", &populacaocidade2deestado2);

    printf("Digite a Área da segunda Cidade:\n");
    scanf("%f", &areacidade2deestado2);

    printf("Digite o PIB da segunda Cidade:\n");
    scanf("%lf", &pibcidade2deestado2);

    printf("Pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontosturisticoscidade2deestado2);

    printf("Digite a densidade Populacional: \n");
    scanf("%f", &densidadepopulacionalcidade2estado2);

    printf("\n");

    //Divisão de densidade entre 2 cartas

    divisaopibpercapitacidade1estado1 = pibcidade1deestado1 / densidadepopulacionalcidade1estado1;
    divisaopibpercapitacidade2estado2 = pibcidade2deestado2 / densidadepopulacionalcidade2estado2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição do estado 1
    printf("País: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("Primeira Cidade: %s\n", cidade1deestado1);
    printf("População da primeira cidade: %f\n", populacaocidade1deestado1);
    printf("Área da primeira cidade: %f\n", areacidade1deestado1);
    printf("PIB da primeira Cidade: %f\n", pibcidade1deestado1);
    printf("Pontos turísticos da primeira cidade: %d\n", pontosturisticoscidade1deestado1);
    printf("Densidade Poulacional:%f\n", densidadepopulacionalcidade1estado1);
    printf("Pib per capita é: %.f\n", divisaopibpercapitacidade1estado1);
    
    printf("\n");
    //exigibição de Cidade 2

    printf("Segunda Cidade: %s\n", cidade1deestado2);
    printf("População da Segunda cidade: %f\n", populacaocidade2deestado2);
    printf("Área da Segunda cidade: %f\n", areacidade2deestado2);
    printf("PIB da Seguda Cidade: %f\n", pibcidade2deestado2);
    printf("Pontos turísticos da Segunda cidade: %d\n", pontosturisticoscidade2deestado2);
    printf("Densidade Poulacional:%f\n", densidadepopulacionalcidade2estado2);
    printf("Pib per capita é: %.f\n", divisaopibpercapitacidade2estado2);

    printf("\n");

    // soma e Exibição do Poder Especial

    poderespecialcidade1 = populacaocidade1deestado1 + areacidade1deestado1 + pibcidade1deestado1 + pontosturisticoscidade1deestado1 + divisaopibpercapitacidade1estado1;
    poderespecialcidade2 = populacaocidade2deestado2 + areacidade2deestado2 + pibcidade2deestado2 + pontosturisticoscidade2deestado2 + divisaopibpercapitacidade2estado2;

    printf("Poder Especial da carta 1: %lld\n", (long long int)poderespecialcidade1);
    printf("Poder Especial da carta 2: %lld\n", (long long int)poderespecialcidade2);
    
    //Comparação e Exibição de Densidade Populaciional entre cartas

    printf("Densidade Populacional de Carta 1 é menor que a de Carta 2? %d\n", densidadepopulacionalcidade1estado1 < densidadepopulacionalcidade2estado2);
    printf("Carta 1 vence a Carta 2? %d\n", poderespecialcidade1 > poderespecialcidade2);

    printf("\n");
    return 0;
}
