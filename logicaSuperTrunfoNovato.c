#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    //inserir informações da carta 1
    char estado1[20] = "A";
    char codigocarta1[4]= "A01";
    char cidade1[20] = "Mogi";
    unsigned long int populacao1 = 451000;
    float areakm1 = 725;
    double pib1 = 19000000000;
    int pontosturisticos1 = 4;
    float densidadepopul1 = populacao1 / areakm1;
    float pibpercapita1 = pib1 / populacao1;
    double superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapita1 + densidadepopul1;
    
    //inserir informações da carta 2
    char estado2[20] = "B";
    char codigocarta2[4] = "B01";
    char cidade2[20] = "Angra";
    unsigned long int populacao2 = 179000;
    float areakm2 = 813;
    double pib2 = 11000000000;
    int pontosturisticos2 = 8;
    float densidadepopul2 = populacao2 / areakm2;
    float pibpercapita2 = pib2 / populacao2;
    double superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapita2 + densidadepopul2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
   //inserir a lógica para responder os requisitos da carta1
    printf("***** Desafio Super Trunfo *****\n");
    printf("Carta 1: Digite os dados da carta 1 conforme for solicitado.\n");

    printf("Digite a letra referente o Estado da carta1: ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta1: ");
    scanf("%s", codigocarta1);
    
    printf("Digite o nome da cidade da carta1: ");
    scanf("%s", cidade1);
    
    printf("Digite a população da cidade da carta1: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da cidade da carta1: ");
    scanf("%f", &areakm1);
    
    printf("Digite o valor do pib da cidade da carta1: ");
    scanf("%lf", &pib1);
    
    printf("Digite o nº de pontos turísticos da cidade da carta1: ");
    scanf("%d", &pontosturisticos1);

    printf("Densidade demográfica da cidade da carta1: %.0f hab/km²\n", densidadepopul1);

    printf("Pib per capita da cidade da carta1: R$ %.2f\n", pibpercapita1);

    printf("Super Poder da carta1: %.0lf pontos\n", superpoder1);
           
//inserir a lógica para responder os requisitos da carta2
    printf("\nCarta 2: Digite os dados da carta 2 conforme for solicitado.\n");

    printf("Digite a letra referente o Estado da carta2: ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta2: ");
    scanf("%s", codigocarta2);
    
    printf("Digite o nome da cidade da carta2: ");
    scanf("%s", cidade2);
    
    printf("Digite a população da cidade da carta2: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da cidade da carta1: ");
    scanf("%f", &areakm2);
    
    printf("Digite o valor do pib da cidade da carta1: ");
    scanf("%lf", &pib2);
    
    printf("Digite o nº de pontos turísticos da cidade da carta2: ");
    scanf("%d", &pontosturisticos2);
    
    printf("Densidade demográfica da cidade da carta2: %.0f hab/km²\n", densidadepopul2);

    printf("Pib per capita da cidade da carta2: R$ %.2f\n", pibpercapita2);

    printf("Super Poder carta2: %.0lf pontos\n", superpoder2);

    printf("\n");
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    if (populacao1 > populacao2) {
        printf("Vencedor critério população: Carta1 Mogi.\n");
    }else {
        printf("Vencedor critério população: Carta2 Angra.\n"); }

    if (areakm1 > areakm2) {
        printf("Vencedor critério área: Carta1 Mogi.\n");
    }else {
        printf("Vencedor critério área: Carta2 Angra.\n"); }

    //if (pib1 > pib2) {
    //    printf("Mogi tem o maior Pib.\n");
    //}else {
    //    printf("Angra tem o maior Pib.\n"); }

    //if (pontosturisticos1 > pontosturisticos2) {
    //    printf("Mogi tem mais pontos turísticos.\n");
    //}else {
    //    printf("Angra tem mais pontos turísticos.\n"); }

    //if (densidadepopul1 < densidadepopul2) {
    //    printf("Mogi tem a menor densidade demográfica.\n");
    //}else {
    //    printf("Angra tem a menor densidade demográfica.\n"); }

    //if (pibpercapita1 > pibpercapita2) {
    //    printf("Mogi tem o maior Pib Per Capita.\n");
    //}else {
    //    printf("Angra tem o maior Pib Per Capita.\n"); }
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}