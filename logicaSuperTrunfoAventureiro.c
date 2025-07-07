#include <stdio.h>

int main() {
    
        
    //inserir informações da carta 1
    char estado1[20] = "A";
    char codigocarta1[4]= "A01";
    char cidade1[20] = "Mogi";
    double populacao1 = 451000;
    float areakm1 = 725;
    double pib1 = 19000000000;
    int pontosturisticos1 = 10;
    float densidadepopul1 = populacao1 / areakm1;
    float pibpercapita1 = pib1 / populacao1;
    double superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapita1 + densidadepopul1;
    
    //inserir informações da carta 2
    char estado2[20] = "B";
    char codigocarta2[4] = "B01";
    char cidade2[20] = "Angra";
    double populacao2 = 179000;
    float areakm2 = 813;
    double pib2 = 11000000000;
    int pontosturisticos2 = 10;
    float densidadepopul2 = populacao2 / areakm2;
    float pibpercapita2 = pib2 / populacao2;
    double superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapita2 + densidadepopul2;
      
      
    //perguntar ao usuário qual atributo deseja comparar
int opcao;
    printf("**** Super Trunfo Países ****\n");
    printf("Escolha uma opção para comparar as cidades de Mogi/SP e Angra/RJ.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcao);

    //implementar lógica switch e if else
switch (opcao) {
    case 1: 
        printf("Comparando População:\n");
        if (populacao1 > populacao2){
        printf("Mogi Venceu!\n");
        printf("População Mogi: %.0lf habitantes\n", populacao1);
        printf("População Angra: %.0lf habitantes\n", populacao2);
        } else if (populacao1 < populacao2) {
            printf("Angra Venceu!\n");
            printf("População Mogi: %.0lf habitantes\n", populacao1);
            printf("População Angra: %.0lf habitantes\n", populacao2);
            }else {
                printf("Empate! As populações são iguais.\n");
                printf("População Mogi: %.0lf habitantes\n", populacao1);
                printf("População Angra: %.0lf habitantes\n", populacao2);
            } break;
       
    case 2: 
        printf("Comparando Área:\n");
        if (areakm1 > areakm2){
        printf("Mogi Venceu!\n");
        printf("Área Mogi: %.0f km²\n", areakm1);
        printf("Área Angra: %.0f km²\n", areakm2);
        } else if (areakm1 < areakm2) {
            printf("Angra Venceu!\n");
            printf("Área Mogi: %.0f km²\n", areakm1);
            printf("Área Angra: %.0f km²\n", areakm2);
            }else {
                printf("Empate! As áreas são iguais.\n");
                printf("Área Mogi: %.0f km²\n", areakm1);
                printf("Área Angra: %.0f km²\n", areakm2);
            } break;

    case 3: 
        printf("Comparando o Pib:\n");
        if (pib1 > pib2){
        printf("Mogi Venceu!\n");
        printf("Pib Mogi: R$ %.2lf\n", pib1);
        printf("Pib Angra: R$ %.2lf\n", pib2);
        } else if (pib1 < pib2) {
            printf("Angra Venceu!\n");
            printf("Pib Mogi: R$ %.2lf\n", pib1);
            printf("Pib Angra: R$ %.2lf\n", pib2);
            }else {
                printf("Empate! Os Pibs são iguais.\n");
                printf("Pib Mogi: R$ %.2lf\n", pib1);
                printf("Pib Angra: R$ %.2lf\n", pib2);
            } break;

    case 4: 
        printf("Comparando Pontos Turísticos:\n");
        if (pontosturisticos1 > pontosturisticos2){
        printf("Mogi Venceu!\n");
        printf("Pontos Turísticos Mogi: %d\n", pontosturisticos1);
        printf("Pontos Turísticos Angra: %d\n", pontosturisticos2);
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("Angra Venceu!\n");
            printf("Pontos Turísticos Mogi: %d\n", pontosturisticos1);
            printf("Pontos Turísticos Angra: %d\n", pontosturisticos2);
            }else {
                printf("Empate! As quantidades de pontos turísticos são iguais.\n");
                printf("Pontos Turísticos Mogi: %d\n", pontosturisticos1);
                printf("Pontos Turísticos Angra: %d\n", pontosturisticos2);
            } break;

    case 5: 
        printf("Comparando a densidade demográfica:\n");
        if (densidadepopul1 < densidadepopul2){
        printf("Mogi Venceu!\n");
        printf("Densidade Demográfica Mogi: %.0f hab/km²\n", densidadepopul1);
        printf("Densidade Demográfica Angra: %.0f hab/km²\n", densidadepopul2);
        } else if (densidadepopul1 > densidadepopul2) {
            printf("Angra Venceu!\n");
            printf("Densidade Demográfica Mogi: %.0f hab/km²\n", densidadepopul1);
            printf("Densidade Demográfica Angra: %.0f hab/km²\n", densidadepopul2);
            }else {
                printf("Empate! A densidade demográfica é igual.\n");
                printf("Densidade Demográfica Mogi: %.0f hab/km²\n", densidadepopul1);
                printf("Densidade Demográfica Angra: %.0f hab/km²\n", densidadepopul2);
            } break;
            default:
            printf("Entrada inválida, tente outra vez!\n");
}
       

    return 0;
}